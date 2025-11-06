---
outline: deep
---
# Experiment 18:

## Question:

- **Write a C program that illustrates how an orphan is created.**

## Program:
```c [exp-18.c]
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();  // Create a new process

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    // Child process
    else if (pid == 0) {
        printf("Child: My PID is %d\n", getpid());
        printf("Child: My Parent PID is %d\n", getppid());
        sleep(5);  // Sleep to allow parent to terminate
        printf("Child (after parent exit): My new Parent PID is %d\n", getppid());
        printf("Child: I am now an orphan process!\n");
    }

    // Parent process
    else {
        printf("Parent: My PID is %d\n", getpid());
        printf("Parent: Child PID is %d\n", pid);
        printf("Parent: Exiting now...\n");
        exit(0);  // Parent exits immediately
    }

    return 0;
}
```


## Output
```bash

```