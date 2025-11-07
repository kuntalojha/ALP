---
outline: deep
---
# Experiment 27:

## Question:

- **Write a C program that illustrates two processes communicating using shared memory.**

## Program:
```c [exp-27.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main() {
    key_t key;
    int shmid;
    char *shared_memory;
    pid_t pid;

    // Generate a unique key
    key = ftok("shmfile", 65);
    if (key == -1) {
        perror("ftok");
        exit(1);
    }

    // Create shared memory segment of size 1024 bytes
    shmid = shmget(key, 1024, 0666 | IPC_CREAT);
    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }

    // Fork a child process
    pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(1);
    }

    else if (pid == 0) {
        // ----- CHILD PROCESS -----
        sleep(2); // Wait for parent to write
        shared_memory = shmat(shmid, NULL, 0);
        if (shared_memory == (char *)-1) {
            perror("shmat");
            exit(1);
        }

        printf("Child Process: Reading from shared memory...\n");
        printf("Data: %s\n", shared_memory);

        shmdt(shared_memory); // Detach from shared memory
    }

    else {
        // ----- PARENT PROCESS -----
        shared_memory = shmat(shmid, NULL, 0);
        if (shared_memory == (char *)-1) {
            perror("shmat");
            exit(1);
        }

        printf("Parent Process: Enter a message: ");
        fgets(shared_memory, 1024, stdin);

        printf("Parent Process: Message written to shared memory.\n");

        shmdt(shared_memory); // Detach from shared memory
        wait(NULL);           // Wait for child to complete
        shmctl(shmid, IPC_RMID, NULL); // Destroy shared memory
    }

    return 0;
}

```


## Output
```bash

```