#include "main.h"
#include <string.h>

/**
 * append_text_to_file - A function that appends text to a file
 * @filename: The name of the file
 * @text_content: The text appends to the file
 * Return: 1 on completion, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, writes, l;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	writes = write(f, text_content, l);

	if (f == -1 || writes == -1)
		return (-1);

	close(f);

	return (1);
}
