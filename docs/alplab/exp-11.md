---
outline: deep
---
# Experiment 11:

## Question:

- **Implement in C the following UNIX commands using System calls A.cat B.ls C.mv**

## Program:
```c [exp-11.sh]
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>

#define SIZE 1024

// Function to display file content
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
// Function to list directory contents
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
// Function to move or rename a file
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

```


## Output
```bash
kuntal@ojha:~/linux/exp11$ ls
abc.txt  exp11  exp11.c  input.txt  student
kuntal@ojha:~/linux/exp11$ cat input.txt
Hello, World!
This file contains sample text file.
End of file.
kuntal@ojha:~/linux/exp11$ gcc exp11.c -o exp11
kuntal@ojha:~/linux/exp11$ ./exp11
1. cat Display file content
2. ls  List directory contents
3. mv  Move/Rename file
4. Exit
Enter your choice: 1
Enter file name: input.txt
Hello, World!
This file contains sample text file.
End of file.
1. cat Display file content
2. ls  List directory contents
3. mv  Move/Rename file
4. Exit
Enter your choice: 2
Enter directory name: student
.
..
file2.txt
file1.txt
Enter your choice: 3
Enter source file name: abc.txt
Enter destination file name: gef.txt
File renamed or moved successfully.
1. cat Display file content
2. ls  List directory contents
3. mv  Move/Rename file
4. Exit
Enter your choice: 
4
Exiting program.
kuntal@ojha:~/linux/exp11$ ls
exp11  exp11.c  gef.txt  input.txt  student
kuntal@ojha:~/linux/exp11$ 
```
