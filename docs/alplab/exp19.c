#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pipefd[2];
    pid_t pid;

    // Create a pipe
    if (pipe(pipefd) == -1) {
        perror("pipe failed");
        exit(1);
    }

    // Create the first child process (for "ls -l")
    pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process: executes "ls -l"
        close(pipefd[0]);             // Close read end
        dup2(pipefd[1], STDOUT_FILENO); // Redirect stdout to pipe
        close(pipefd[1]);

        execlp("ls", "ls", "-l", NULL);
        perror("execlp failed");
        exit(1);
    }

    // Create the second child process (for "sort")
    pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process: executes "sort"
        close(pipefd[1]);             // Close write end
        dup2(pipefd[0], STDIN_FILENO);  // Redirect stdin to pipe
        close(pipefd[0]);

        execlp("sort", "sort", NULL);
        perror("execlp failed");
        exit(1);
    }

    // Parent process
    close(pipefd[0]);
    close(pipefd[1]);

    // Wait for both children to finish
    wait(NULL);
    wait(NULL);

    return 0;
}