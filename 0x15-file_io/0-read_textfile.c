#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd = open(filename, O_RDONLY);
    char *buffer = malloc(letters);

    if (filename == NULL) {
        return 0;
    }


    if (fd == -1) {
        perror("Error opening file");
        return 0;
    }

    if (buffer == NULL) {
        perror("Error allocating buffer");
        close(fd);
        return 0;
    }

    ssize_t bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1) {
        perror("Error reading file");
        free(buffer);
        close(fd);
        return 0;
    }

    ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || (size_t)bytes_written != bytes_read) {
        perror("Error writing to standard output");
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);

    return bytes_read;
}

