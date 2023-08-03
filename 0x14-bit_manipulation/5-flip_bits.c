#include "main.h"

/**
 * flip_bits - A function that producess the no of bits you need to flip
 * @n: The first no
 * @m: The second no
 * Return: The no of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, res = 0;
	unsigned long int rec;
	unsigned long int sul = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		rec = sul >> d;
		if (rec & 1)
			res++;
	}
	return (res);
}
