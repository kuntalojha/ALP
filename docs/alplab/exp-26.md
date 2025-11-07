---
outline: deep
---
# Experiment 26:

## Question:

- **Write client and server programs (using c) for interaction between server and client processes using Internet Domain sockets.**

## Program:
- ### Server Program
```c [exp_26_server.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char *message = "Hello from Server!";

    // Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Configure address
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;  // Accept any incoming connection
    address.sin_port = htons(PORT);

    // Bind socket to IP and port
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Bind failed");
        exit(EXIT_FAILURE);
    }

    // Listen for client connections
    if (listen(server_fd, 3) < 0) {
        perror("Listen failed");
        exit(EXIT_FAILURE);
    }

    printf("Server is waiting for connection on port %d...\n", PORT);

    // Accept a connection
    new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);
    if (new_socket < 0) {
        perror("Accept failed");
        exit(EXIT_FAILURE);
    }

    // Read message from client
    read(new_socket, buffer, sizeof(buffer));
    printf("Message from Client: %s\n", buffer);

    // Send reply to client
    send(new_socket, message, strlen(message), 0);
    printf("Reply sent to client.\n");

    close(new_socket);
    close(server_fd);

    return 0;
}

```
- ### Client Program
```c [exp_26_client.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[1024] = {0};
    char message[100];

    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // Configure server address
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 address from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        perror("Invalid address");
        exit(EXIT_FAILURE);
    }

    // Connect to server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    // Get user message
    printf("Enter message to send: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove newline

    // Send message to server
    send(sock, message, strlen(message), 0);
    printf("Message sent to server.\n");

    // Receive reply
    read(sock, buffer, sizeof(buffer));
    printf("Message from Server: %s\n", buffer);

    close(sock);
    return 0;
}
```
## Output
