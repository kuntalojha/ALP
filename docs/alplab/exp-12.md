---
outline: deep
---
# Experiment 12:

## Question:

- **Write a program that takes one or more file/directory names as command line input and reports the following information on the file.A. File type. B. Number of links. C. Time of last access. D. Read, Write and Execute permissions.**

## Program:
```c [exp-12.c]
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>

// Function to print file permissions in rwx format
void print_permissions(mode_t mode) {
    printf("Permissions: ");
    printf((mode & S_IRUSR) ? "r" : "-");
    printf((mode & S_IWUSR) ? "w" : "-");
    printf((mode & S_IXUSR) ? "x" : "-");
    printf((mode & S_IRGRP) ? "r" : "-");
    printf((mode & S_IWGRP) ? "w" : "-");
    printf((mode & S_IXGRP) ? "x" : "-");
    printf((mode & S_IROTH) ? "r" : "-");
    printf((mode & S_IWOTH) ? "w" : "-");
    printf((mode & S_IXOTH) ? "x" : "-");
    printf("\n");
}

int main() {
    struct stat fileStat;
    char filename[256];

    printf("Enter file or directory name: ");
    fgets(filename, sizeof(filename), stdin);

    // Remove newline character from input
    filename[strcspn(filename, "\n")] = '\0';

    if (stat(filename, &fileStat) < 0) {
        perror("Error accessing file");
        return 1;
    }

    printf("\n--------------------------------------\n");
    printf("Information for: %s\n", filename);
    printf("--------------------------------------\n");

    // A. File type
    printf("File Type: ");
    if (S_ISREG(fileStat.st_mode))
        printf("Regular File\n");
    else if (S_ISDIR(fileStat.st_mode))
        printf("Directory\n");
    else if (S_ISCHR(fileStat.st_mode))
        printf("Character Device\n");
    else if (S_ISBLK(fileStat.st_mode))
        printf("Block Device\n");
#ifdef S_ISLNK   // Check if macro exists (for Ubuntu)
    else if (S_ISLNK(fileStat.st_mode))
        printf("Symbolic Link\n");
#endif
#ifdef S_ISSOCK  // Check if macro exists (for Ubuntu)
    else if (S_ISSOCK(fileStat.st_mode))
        printf("Socket\n");
#endif
    else if (S_ISFIFO(fileStat.st_mode))
        printf("FIFO (Named Pipe)\n");
    else
        printf("Unknown Type\n");

    // B. Number of links
    printf("Number of Links: %lu\n", fileStat.st_nlink);

    // C. Time of last access
    printf("Last Access: %s", ctime(&fileStat.st_atime));

    // D. Read, Write, Execute permissions
    print_permissions(fileStat.st_mode);

    return 0;
}
```


## Output
```bash
kuntal@ojha:~/linux/exp12$ ls
cse  exp12  exp12.c  input.txt  student
kuntal@ojha:~/linux/exp12$ gcc exp12.c -o exp12
kuntal@ojha:~/linux/exp12$ ./exp12
Enter file or directory name: input.txt

--------------------------------------
Information for: input.txt
--------------------------------------
File Type: Regular File
Number of Links: 1
Last Access: Thu Nov  6 15:38:21 2025
Permissions: rw-rw-r--
kuntal@ojha:~/linux/exp12$ 
```
