#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Function that converts a binary number
 *	to unsigned int
 * @b: A string that contains the binary number
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int del = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		del = 2 * del + (b[d] - '0');
	}
	return (del);
}
