#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *entry;
    char *dirname;

    // If directory not specified, use current directory
    if (argc < 2)
        dirname = ".";
    else
        dirname = argv[1];

    // Open directory
    dir = opendir(dirname);
    if (dir == NULL) {
        perror("Unable to open directory");
        return 1;
    }

    printf("\nInode Number\tFile Name\n");
    printf("---------------------------------\n");

    // Read entries one by one
    while ((entry = readdir(dir)) != NULL) {
        printf("%10lu\t%s\n", (unsigned long)entry->d_ino, entry->d_name);
    }

    closedir(dir);
    return 0;
}
