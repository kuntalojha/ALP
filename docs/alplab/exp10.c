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