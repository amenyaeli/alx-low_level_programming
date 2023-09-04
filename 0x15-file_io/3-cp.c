#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *f);
void close_fil(int d);

/**
 * create_buff - Gets 1024 bytes for a buffer.
 * @f: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly gotten buffer.
 */
char *create_buff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buff);
}

/**
 * close_fil - A function that Closes file descriptors.
 * @d: The file descriptor to be closed.
 */
void close_fil(int d)
{
	int t;

	t = close(d);

	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - A functin that copies the contents of a file to another file.
 * @argc: The no of arguments given to the program.
 * @argv: A pointers of array to the arguments.
 *
 * Return: 0 oncompletion
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or can't be read - exit code 98.
 * If file_to can't be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, o, reads, writes;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	fr = open(argv[1], O_RDONLY);
	reads = read(fr, buff, 1024);
	o = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || reads == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		writes = write(o, buff, reads);
		if (o == -1 || writes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		reads = read(fr, buff, 1024);
		o = open(argv[2], O_WRONLY | O_APPEND);

	} while (reads > 0);

	free(buff);
	close_fil(fr);
	close_fil(o);

	return (0);
}
