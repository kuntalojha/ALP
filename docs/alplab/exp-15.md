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
#include <unistd.h>  // for dup2()

int main() {
    FILE *file;
    char filename[100];
    char message[500];

    // Ask the user for file name
    printf("Enter the file name to redirect output into: ");
    scanf("%s", filename);

    // Ask the user for message
    printf("Enter the message to write into the file: ");
    getchar(); // to clear newline from buffer
    fgets(message, sizeof(message), stdin);

    // Open the file in append mode
    file = fopen(filename, "a+");
    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    // Redirect stdout to the file
    dup2(fileno(file), fileno(stdout));

    // Anything printed below will go into the file instead of the terminal
    printf("%s", message);

    fclose(file);
    printf("Output has been redirected to '%s'.\n", filename);

    return 0;
}

```


## Output
```bash

```