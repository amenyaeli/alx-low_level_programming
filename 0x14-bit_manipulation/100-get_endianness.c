#include "main.h"

/**
 * get_endianness - A func that checks if endian is big or little
 * Return: 0 if big, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *b = (char *) &m;

	return (*b);
}
