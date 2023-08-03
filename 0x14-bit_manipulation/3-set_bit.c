#include "main.h"

/**
 * set_bit - A function that sets a bit value to 1 at a given index
 * @n: A pointer to the no to change
 * @index: The position of the bit to set to 1
 * Return: 1 if completed, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
