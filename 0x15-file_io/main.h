#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ab = open(filename, O_RDONLY);

	if(ab == -1)
	{
		perror("Error opening file");
		exit(EXIT_FAILURE);
	}

	char buffer[4096];

	ssize_t readBytes;

	while((readBytes = read(ab, buffer, sizeof(buffer))) > 0)
	{
		if(write(STDOUT_FILENO, buffer, readBytes) == -1);
		{
			perror("Error opening file");
			exit(EXIT_FAILURE);
		}
	}
}
