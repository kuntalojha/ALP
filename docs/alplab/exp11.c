#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

#define SIZE 1024

void my_cat(char *filename) {
    int fd;
    char buffer[SIZE];
    ssize_t n;

    fd = open(filename, O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return;
    }

    while ((n = read(fd, buffer, SIZE)) > 0) {
        write(STDOUT_FILENO, buffer, n);
    }

    close(fd);
}

void my_ls(char *dirname) {
    DIR *dir;
    struct dirent *entry;

    dir = opendir(dirname);
    if (dir == NULL) {
        perror("Error opening directory");
        return;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
}

void my_mv(char *src, char *dest) {
    if (rename(src, dest) == 0)
        printf("File renamed or moved successfully.\n");
    else
        perror("Error moving/renaming file");
}

int main() {
    int choice;
    char file1[100], file2[100], dir[100];

    while (1) {
        printf("1. cat Display file content\n");
        printf("2. ls  List directory contents\n");
        printf("3. mv  Move/Rename file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter file name: ");
                scanf("%s", file1);
                my_cat(file1);
                break;

            case 2:
                printf("Enter directory name: ");
                scanf("%s", dir);
                my_ls(dir);
                break;

            case 3:
                printf("Enter source file name: ");
                scanf("%s", file1);
                printf("Enter destination file name: ");
                scanf("%s", file2);
                my_mv(file1, file2);
                break;

            case 4:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
