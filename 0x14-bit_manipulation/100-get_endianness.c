#include "main.h"

/**
 * get_endianness - A function that checks the size of endian
 * Return: 0 if big and 1 if little
 */

int get_endianness(void)
{
	unsigned int d = 1;

	char *m = (char *) &d;

	return (*m);
}
