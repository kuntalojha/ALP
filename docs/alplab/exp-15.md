---
outline: deep
---
# Experiment 15:

## Question:

- **Write a C program that demonstrates redirection of standard output to a file.   Ex: ls > f1.**

## Program:
```c [exp-15.c]
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char filename[100], message[500];
    FILE *file;
    int saved_out;

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); // clear newline

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    file = fopen(filename, "a");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    saved_out = dup(1);            // save current stdout
    dup2(fileno(file), 1);         // redirect stdout to file

    printf("%s", message);         // this goes to file
    fflush(stdout);

    dup2(saved_out, 1);            // restore stdout
    close(saved_out);
    fclose(file);

    printf("Message written to '%s'\n", filename);
    return 0;
}
```


## Output
```bash
kuntal@ojha:~/linux/exp15$ ls
exp15.c
kuntal@ojha:~/linux/exp15$ gcc exp15.c -o exp15
kuntal@ojha:~/linux/exp15$ ./exp15
Enter file name: output.txt
Enter message: hello world!
Message written to 'output.txt'
kuntal@ojha:~/linux/exp15$ cat output.txt
hello world!
kuntal@ojha:~/linux/exp15$ 
```
