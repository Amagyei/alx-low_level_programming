#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the file can not be opened or read.
 *         0 if filename is NULL.
 *         0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, read_result, write_result;
    char *buffer;

    if (filename == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(letters);
    if (buffer == NULL)
        return (0);

    read_result = read(fd, buffer, letters);
    if (read_result == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    write_result = write(STDOUT_FILENO, buffer, read_result);
    if (write_result == -1 || write_result != (ssize_t)read_result)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (read_result);
}
