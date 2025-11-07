#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

// Define message structure
struct msg_buffer {
    long msg_type;      // message priority/type
    char msg_text[100]; // message data
};

int main() {
    key_t key;
    int msgid;
    struct msg_buffer message;

    // Generate a unique key
    key = ftok("progfile", 65);  // 'progfile' can be any existing file
    if (key == -1) {
        perror("ftok");
        exit(1);
    }

    // Create a message queue with read & write permissions
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        exit(1);
    }

    // Write 3 messages with different priority numbers
    for (int i = 1; i <= 3; i++) {
        message.msg_type = i;  // priority (1 = lowest, 3 = highest)
        snprintf(message.msg_text, sizeof(message.msg_text),
                 "This is message number %d with priority %ld", i, message.msg_type);

        if (msgsnd(msgid, &message, sizeof(message.msg_text), 0) == -1) {
            perror("msgsnd");
            exit(1);
        }

        printf("Message %d sent successfully (Priority = %ld)\n", i, message.msg_type);
    }

    printf("\nAll messages sent successfully!\n");

    return 0;
}