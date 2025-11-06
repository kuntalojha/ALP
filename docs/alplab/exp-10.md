---
outline: deep
---
# Experiment 10:

## Question:

- **Write a c program that makes a copy of a file using standard I/O and system calls.**

## Program:
```c [exp-10.sh]
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024   // Buffer size

// Function to copy file using Standard I/O
void copy_using_stdio(char *src, char *dest) {
    FILE *fsrc, *fdest;
    char buffer[SIZE];
    size_t n;

    fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        perror("Error opening source file");
        return;
    }

    fdest = fopen(dest, "w");
    if (fdest == NULL) {
        perror("Error opening destination file");
        fclose(fsrc);
        return;
    }

    while ((n = fread(buffer, 1, SIZE, fsrc)) > 0) {
        fwrite(buffer, 1, n, fdest);
    }

    fclose(fsrc);
    fclose(fdest);

    printf("\nFile copied successfully using Standard I/O.\n");
}

// Function to copy file using System Calls
void copy_using_syscalls(char *src, char *dest) {
    int fsrc, fdest;
    char buffer[SIZE];
    ssize_t n;

    fsrc = open(src, O_RDONLY);
    if (fsrc < 0) {
        perror("Error opening source file");
        return;
    }

    fdest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fdest < 0) {
        perror("Error opening destination file");
        close(fsrc);
        return;
    }

    while ((n = read(fsrc, buffer, SIZE)) > 0) {
        write(fdest, buffer, n);
    }

    close(fsrc);
    close(fdest);

    printf("\nFile copied successfully using System Calls.\n");
}

int main() {
    int choice;
    char src[100], dest[100];
    printf("1. Copy using Standard I/O\n");
    printf("2. Copy using System Calls\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter source file name: ");
    scanf("%s", src);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    if (choice == 1)
        copy_using_stdio(src, dest);
    else if (choice == 2)
        copy_using_syscalls(src, dest);
    else
        printf("Invalid choice!\n");

    return 0;
}
```

## Output
```bash
kuntal@ojha:~/linux/exp10$ ls
exp10.c  input.txt
kuntal@ojha:~/linux/exp10$ cat input.txt
Hello, this is a sample text file.
This file will be copied using C program.
You can add any text here you like.
End of file.
kuntal@ojha:~/linux/exp10$ gcc exp10.c exp10
/usr/bin/ld: cannot find exp10: No such file or directory
collect2: error: ld returned 1 exit status
kuntal@ojha:~/linux/exp10$ gcc exp10.c -o exp10
kuntal@ojha:~/linux/exp10$ ./exp10
1. Copy using Standard I/O
2. Copy using System Calls
Enter your choice: 1
Enter source file name: input.txt
Enter destination file name: output.txt

File copied successfully using Standard I/O.
kuntal@ojha:~/linux/exp10$ ls
exp10  exp10.c  input.txt  output.txt
kuntal@ojha:~/linux/exp10$ cat output.txt
Hello, this is a sample text file.
This file will be copied using C program.
You can add any text here you like.
End of file.
kuntal@ojha:~/linux/exp10$ 
```
