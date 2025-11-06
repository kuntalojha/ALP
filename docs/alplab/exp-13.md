---
outline: deep
---
# Experiment 13:

## Question:

- **Write a C program to emulate the UNIX ls l command.**

## Program:
```c [exp-13.c]
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>

#ifdef __linux__
#include <pwd.h>
#include <grp.h>
#endif

// Function to print file permissions
void print_permissions(mode_t mode) {
    printf((S_ISDIR(mode)) ? "d" : "-");
    printf((mode & S_IRUSR) ? "r" : "-");
    printf((mode & S_IWUSR) ? "w" : "-");
    printf((mode & S_IXUSR) ? "x" : "-");
    printf((mode & S_IRGRP) ? "r" : "-");
    printf((mode & S_IWGRP) ? "w" : "-");
    printf((mode & S_IXGRP) ? "x" : "-");
    printf((mode & S_IROTH) ? "r" : "-");
    printf((mode & S_IWOTH) ? "w" : "-");
    printf((mode & S_IXOTH) ? "x" : "-");
}

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *entry;
    struct stat fileStat;
    char path[1024];
    char *dirname;

    // If no directory provided, use current directory
    if (argc < 2)
        dirname = ".";
    else
        dirname = argv[1];

    // Open directory
    dir = opendir(dirname);
    if (dir == NULL) {
        perror("Unable to open directory");
        return 1;
    }

    printf("\nListing files in directory: %s\n\n", dirname);

    // Read each file entry
    while ((entry = readdir(dir)) != NULL) {
        snprintf(path, sizeof(path), "%s/%s", dirname, entry->d_name);

        if (stat(path, &fileStat) == -1) {
            perror("stat");
            continue;
        }

        // 1. File permissions
        print_permissions(fileStat.st_mode);
        printf(" ");

        // 2. Number of links
        printf("%2lu ", fileStat.st_nlink);

        // 3. Owner and group
#ifdef __linux__
        struct passwd *pw = getpwuid(fileStat.st_uid);
        struct group *gr = getgrgid(fileStat.st_gid);
        printf("%s %s ", pw ? pw->pw_name : "?", gr ? gr->gr_name : "?");
#else
        printf("%d %d ", fileStat.st_uid, fileStat.st_gid);
#endif

        // 4. File size
        printf("%8ld ", fileStat.st_size);

        // 5. Last modified time
        char timebuf[64];
        strftime(timebuf, sizeof(timebuf), "%b %d %H:%M", localtime(&fileStat.st_mtime));
        printf("%s ", timebuf);

        // 6. File name
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
    return 0;
}

```


## Output
```bash
kuntal@ojha:~/linux/exp13$ ls -a
.  ..  cse  exp13  exp13.c  input.txt
kuntal@ojha:~/linux/exp13$ gcc exp13.c -o exp13
kuntal@ojha:~/linux/exp13$ ./exp13

Listing files in directory: .

-rw-rw-r--  1 kuntal kuntal       64 Nov 06 15:52 input.txt
-rw-rw-r--  1 kuntal kuntal     2237 Nov 06 15:52 exp13.c
-rwxrwxr-x  1 kuntal kuntal    16560 Nov 06 15:54 exp13
drwxrwxrwx 15 kuntal kuntal     4096 Nov 06 15:44 ..
drwxrwxr-x  2 kuntal kuntal     4096 Nov 06 15:52 cse
drwxrwxr-x  3 kuntal kuntal     4096 Nov 06 15:54 .
kuntal@ojha:~/linux/exp13$ 
```
