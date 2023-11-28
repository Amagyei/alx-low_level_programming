#include "main.h"


int create_file(const char *filename, char *text_content) {
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

    
    if (filename == NULL) {
        return -1;
    }


    if (fd == -1) {
        perror("Error creating file");
        return -1;
    }

    if (text_content != NULL) {
        ssize_t bytes_written = write(fd, text_content, strlen(text_content));

        if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content)) {
            perror("Error writing to file");
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
