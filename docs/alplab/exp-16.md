---
outline: deep
---
# Experiment 16:

## Question:

- **Write a C program to create a child process and allow the parent to display and the child to display  on the screen.**

## Program:
```c [exp-16.c]
#include <stdio.h>
#include <unistd.h>   // for fork(), getpid()
#include <sys/types.h>
#include <stdlib.h>

int main() {
    pid_t pid;

    pid = fork();  // Create a new process

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }
    else if (pid == 0) {
        // Child process
        printf("This is the CHILD process.\n");
        printf("Child PID: %d, Parent PID: %d\n", getpid(), getppid());
    }
    else {
        // Parent process
        printf("This is the PARENT process.\n");
        printf("Parent PID: %d, Child PID: %d\n", getpid(), pid);
    }

    return 0;
}

```


## Output
```c
kuntal@ojha:~/linux/exp16$ gcc exp16.c -o exp16
kuntal@ojha:~/linux/exp16$ ./exp16
This is the PARENT process.
Parent PID: 13406, Child PID: 13407
This is the CHILD process.
Child PID: 13407, Parent PID: 1721
kuntal@ojha:~/linux/exp16$ 
```
