#include "main.h"

/**
 * get_bit - A function that produces the value of a bit at a given index
 * @n: The searched number
 * @index: The position of the bit
 * Return: The value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int pos;

	if (index > 63)
		return (-1);
	pos = (n >> index) & 1;
	return (pos);
}
