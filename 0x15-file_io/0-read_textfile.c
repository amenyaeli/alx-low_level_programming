#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it
 * @filename: A file name
 * @letters: No of letters to print
 * Return: No of letters it read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reads, writes;
	char *buff;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	reads = read(fd, buff, letters);
	if (reads == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	writes = write(STDOUT_FILENO, buff, reads);
	if (writes == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	return (reads);
}
