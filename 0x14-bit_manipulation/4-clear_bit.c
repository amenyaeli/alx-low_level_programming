#include "main.h"

/**
 * clear_bit - A function that sets the value of bit to 0
 * @n: A pointer to the no to change
 * @index: The position of the bit to clear
 * Return: 1 if completed, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
