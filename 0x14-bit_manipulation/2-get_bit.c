#include "main.h"

/**
 * get_bit - A func that produces the value of bit at  given index
 * @n: the no to look fo
 * @index: The index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bvale;

	if (index > 63)
		return (-1);

	bvale = (n >> index) & 1;

	return (bvale);
}
