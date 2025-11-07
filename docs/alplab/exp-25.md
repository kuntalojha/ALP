---
outline: deep
---
# Experiment 25:

## Question:

- **Write client and server programs (using c) for interaction between server and client processes using Unix Domain sockets.**

## Program:
- ### Server Program
```c [exp_25_server.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>

#define SOCKET_PATH "unix_socket"

int main() {
    int server_fd, client_fd;
    struct sockaddr_un address;
    char buffer[100];

    // Create socket
    server_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (server_fd == -1) {
        perror("Socket creation failed");
        exit(1);
    }

    // Remove old socket file if it exists
    unlink(SOCKET_PATH);

    // Configure socket address
    memset(&address, 0, sizeof(address));
    address.sun_family = AF_UNIX;
    strcpy(address.sun_path, SOCKET_PATH);

    // Bind socket
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) == -1) {
        perror("Bind failed");
        exit(1);
    }

    // Listen for client connection
    if (listen(server_fd, 5) == -1) {
        perror("Listen failed");
        exit(1);
    }
    printf("Server waiting for client connection...\n");

    // Accept connection
    client_fd = accept(server_fd, NULL, NULL);
    if (client_fd == -1) {
        perror("Accept failed");
        exit(1);
    }

    // Read message from client
    read(client_fd, buffer, sizeof(buffer));
    printf("Message from Client: %s\n", buffer);

    // Send response
    strcpy(buffer, "Hello from Server!");
    write(client_fd, buffer, strlen(buffer));

    close(client_fd);
    close(server_fd);
    unlink(SOCKET_PATH);

    return 0;
}

```
- ### Client Program
```c [exp_25_client.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>

#define SOCKET_PATH "unix_socket"

int main() {
    int client_fd;
    struct sockaddr_un address;
    char buffer[100];
    char message[100];

    // Create socket
    client_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (client_fd == -1) {
        perror("Socket creation failed");
        exit(1);
    }

    // Configure socket address
    memset(&address, 0, sizeof(address));
    address.sun_family = AF_UNIX;
    strcpy(address.sun_path, SOCKET_PATH);

    // Connect to server
    if (connect(client_fd, (struct sockaddr *)&address, sizeof(address)) == -1) {
        perror("Connection failed");
        exit(1);
    }

    // Get message from user
    printf("Enter message to send: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove newline

    // Send message
    write(client_fd, message, strlen(message));
    printf("Message sent to Server.\n");

    // Read response from server
    read(client_fd, buffer, sizeof(buffer));
    printf("Message from Server: %s\n", buffer);

    close(client_fd);
    return 0;
}

```


## Output
![Output](/images/exp25.png)
