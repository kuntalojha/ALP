---
outline: deep
---
# Experiment 24:

## Question:

- **Write a C program that implements a producer-consumer system with two processes. (Using Semaphores).**

## Program:
```c [exp-24.c]
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 5  // Size of buffer

// Semaphore operations
void wait_sem(int semid, int semnum) {
    struct sembuf sb = {semnum, -1, 0}; // P (wait)
    semop(semid, &sb, 1);
}

void signal_sem(int semid, int semnum) {
    struct sembuf sb = {semnum, 1, 0}; // V (signal)
    semop(semid, &sb, 1);
}

int main() {
    int semid;
    key_t key = ftok("semfile", 65);

    if (key == -1) {
        perror("ftok failed");
        exit(1);
    }

    // Create a set of 3 semaphores
    semid = semget(key, 3, 0666 | IPC_CREAT);
    if (semid == -1) {
        perror("semget failed");
        exit(1);
    }

    // Semaphore indices: 0=mutex, 1=empty, 2=full
    semctl(semid, 0, SETVAL, 1);            // mutex = 1
    semctl(semid, 1, SETVAL, BUFFER_SIZE);  // empty = BUFFER_SIZE
    semctl(semid, 2, SETVAL, 0);            // full = 0

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process → Consumer
        for (int i = 1; i <= 5; i++) {
            wait_sem(semid, 2);  // wait(full)
            wait_sem(semid, 0);  // wait(mutex)

            printf("Consumer: Consumed item %d\n", i);
            sleep(1);

            signal_sem(semid, 0); // signal(mutex)
            signal_sem(semid, 1); // signal(empty)
        }
    } else {
        // Parent process → Producer
        for (int i = 1; i <= 5; i++) {
            wait_sem(semid, 1);  // wait(empty)
            wait_sem(semid, 0);  // wait(mutex)

            printf("Producer: Produced item %d\n", i);
            sleep(1);

            signal_sem(semid, 0); // signal(mutex)
            signal_sem(semid, 2); // signal(full)
        }

        wait(NULL);
        semctl(semid, 0, IPC_RMID, 0); // Remove semaphore set
        printf("\nAll items produced and consumed successfully.\n");
    }

    return 0;
}
```


## Output
```bash
kuntal@ojha:~/linux/exp24$ touch semfile
kuntal@ojha:~/linux/exp24$ gcc exp24.c -o exp24
kuntal@ojha:~/linux/exp24$ ./exp24
Producer: Produced item 1
Producer: Produced item 2
Consumer: Consumed item 1
Producer: Produced item 3
Consumer: Consumed item 2
Producer: Produced item 4
Consumer: Consumed item 3
Producer: Produced item 5
Consumer: Consumed item 4
Consumer: Consumed item 5

All items produced and consumed successfully.
kuntal@ojha:~/linux/exp24$ 
```
