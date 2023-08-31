#include "main.h"

/**
 * clear_bit - A func that sets the value of a bit to 0
 * @n: The pointer to the no to change
 * @index: The index of the bit to take away
 * Return: 1 for success, -1 for not succeding
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
