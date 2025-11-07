---
outline: deep
---
# Experiment 23:

## Question:

- **Write a C program that illustrates suspending and resuming processes using signals.**

## Program:
```c [exp-23.c]
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork(); // Create a child process

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process
        while (1) {
            printf("Child process is running...\n");
            sleep(1);
        }
    } else {
        // Parent process
        printf("Parent: Child process started with PID = %d\n", pid);
        sleep(5);

        printf("\nParent: Suspending child process using SIGSTOP...\n");
        kill(pid, SIGSTOP);
        sleep(5);

        printf("\nParent: Resuming child process using SIGCONT...\n");
        kill(pid, SIGCONT);
        sleep(5);

        printf("\nParent: Terminating child process using SIGKILL...\n");
        kill(pid, SIGKILL);

        wait(NULL);
        printf("Parent: Child process terminated. Exiting.\n");
    }

    return 0;
}
```


## Output
```bash
kuntal@ojha:~/linux/exp23$ ls
exp23.c
kuntal@ojha:~/linux/exp23$ gcc exp23.c -o exp23
kuntal@ojha:~/linux/exp23$ ./exp23
Parent: Child process started with PID = 24494
Child process is running...
Child process is running...
Child process is running...
Child process is running...
Child process is running...

Parent: Suspending child process using SIGSTOP...

Parent: Resuming child process using SIGCONT...
Child process is running...
Child process is running...
Child process is running...
Child process is running...
Child process is running...

Parent: Terminating child process using SIGKILL...
Parent: Child process terminated. Exiting.
kuntal@ojha:~/linux/exp23$ 

```
