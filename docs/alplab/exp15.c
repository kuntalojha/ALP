#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char filename[100], message[500];
    FILE *file;
    int saved_out;

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); // clear newline

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    file = fopen(filename, "a");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    saved_out = dup(1);            // save current stdout
    dup2(fileno(file), 1);         // redirect stdout to file

    printf("%s", message);         // this goes to file
    fflush(stdout);

    dup2(saved_out, 1);            // restore stdout
    close(saved_out);
    fclose(file);

    printf("Message written to '%s'\n", filename);
    return 0;
}
