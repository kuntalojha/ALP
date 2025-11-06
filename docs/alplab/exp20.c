#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

int main() {
    const char *fifo_path = "/tmp/myfifo";
    int choice;
    char message[100];

    // Create the FIFO (ignore if it already exists)
    if (mkfifo(fifo_path, 0666) == -1) {
        // Ignore error if FIFO already exists
    }

    printf("==== Named Pipe Communication ====\n");
    printf("1. Send a message (Writer)\n");
    printf("2. Receive a message (Reader)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline

    if (choice == 1) {
        // --- Writer process ---
        int fd = open(fifo_path, O_WRONLY);
        if (fd == -1) {
            perror("open for writing failed");
            exit(1);
        }

        printf("Enter message to send: ");
        fgets(message, sizeof(message), stdin);
        write(fd, message, strlen(message) + 1);
        printf("Message sent successfully!\n");

        close(fd);
    } 
    else if (choice == 2) {
        // --- Reader process ---
        int fd = open(fifo_path, O_RDONLY);
        if (fd == -1) {
            perror("open for reading failed");
            exit(1);
        }

        read(fd, message, sizeof(message));
        printf("Message received: %s\n", message);

        close(fd);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
