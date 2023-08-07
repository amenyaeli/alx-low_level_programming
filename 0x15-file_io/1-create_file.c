#include "main.h"

/**
 * create_file - A function that creates a file with a given text
 * @filename: A file name to be created
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on completion, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int f, ret = 1, l = 0;

	if (!filename)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[l])
		l++;
		ret = write(f, text_content, l);
	}
	if (ret == -1)
		return (-1);
	close(f);
	return (1);
}
