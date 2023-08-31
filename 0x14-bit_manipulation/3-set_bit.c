#include "main.h"

/**
 * set_bit - A func that sets the value of bit at a given index to 1
 * @n: the pointer to the no to change
 * @index: The index of the bit
 * Return: 1 for success, -1 for not succeding
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
