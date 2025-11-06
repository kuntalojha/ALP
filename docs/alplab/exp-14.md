---
outline: deep
---
# Experiment 14:

## Question:

- **Write a C program to list for every file in a directory, its inode number and file name.**

## Program:
```c [exp-14.c]
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *entry;
    char *dirname;

    // If directory not specified, use current directory
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

    printf("\nInode Number\tFile Name\n");
    printf("---------------------------------\n");

    // Read entries one by one
    while ((entry = readdir(dir)) != NULL) {
        printf("%10lu\t%s\n", (unsigned long)entry->d_ino, entry->d_name);
    }

    closedir(dir);
    return 0;
}

```


## Output
```bash
kuntal@ojha:~/linux/exp14$ ls -a
.  ..  exp14  exp14.c  input.txt
kuntal@ojha:~/linux/exp14$ gcc exp14.c -o exp14
kuntal@ojha:~/linux/exp14$ ./exp14

Inode Number    File Name
---------------------------------
   1966097      input.txt
   1966094      exp14.c
   1966101      exp14
   1719635      ..
   1966093      .
kuntal@ojha:~/linux/exp14$ 
```
