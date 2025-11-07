---
outline: deep
---
# Experiment 22:

## Question:

- **Write a C program that receives the messages (from the above message queue as specified in (21)) and displays them.**

## Program:
```c [exp-22.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

// Define message structure (same as sender)
struct msg_buffer {
    long msg_type;
    char msg_text[100];
};

int main() {
    key_t key;
    int msgid;
    struct msg_buffer message;

    // Generate the same key as sender program
    key = ftok("progfile", 65);
    if (key == -1) {
        perror("ftok");
        exit(1);
    }

    // Access the existing message queue
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    // Receive 3 messages one by one
    printf("\nReceiving messages from message queue:\n\n");
    for (int i = 1; i <= 3; i++) {
        if (msgrcv(msgid, &message, sizeof(message.msg_text), i, 0) == -1) {
            perror("msgrcv");
            exit(1);
        }
        printf("Received Message (Priority = %ld): %s\n", message.msg_type, message.msg_text);
    }

    // Destroy the message queue after receiving all messages
    msgctl(msgid, IPC_RMID, NULL);

    printf("\nAll messages received and message queue deleted successfully!\n");

    return 0;
}
```


## Output
```bash

```