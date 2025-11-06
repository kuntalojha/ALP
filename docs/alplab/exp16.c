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
