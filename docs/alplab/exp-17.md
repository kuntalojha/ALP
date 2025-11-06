---
outline: deep
---
# Experiment 17:

## Question:

- **Write a C program to create a Zombie process.**

## Program:
```c [exp-17.c]
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    } 
    else if (pid == 0) {
        // Child process
        printf("Child process (PID: %d) exiting...\n", getpid());
        exit(0);  // Child terminates immediately
    } 
    else {
        // Parent process
        printf("Parent process (PID: %d) created a child (PID: %d)\n", getpid(), pid);
        printf("Parent is sleeping... check 'ps -l' to see the Zombie process.\n");

        sleep(10);  // Keep parent alive so child stays as a zombie
        printf("Parent exiting now, zombie will be cleared.\n");
    }

    return 0;
}

```


## Output
```bash
kuntal@ojha:~/linux/exp17$ ls
exp17  exp17.c
kuntal@ojha:~/linux/exp17$ gcc exp17.c -o exp17
kuntal@ojha:~/linux/exp17$ ./exp17
Parent process (PID: 14193) created a child (PID: 14194)
Child process (PID: 14194) exiting...
Parent is sleeping... check 'ps -l' to see the Zombie process.
Parent exiting now, zombie will be cleared.
kuntal@ojha:~/linux/exp17$ 
```
