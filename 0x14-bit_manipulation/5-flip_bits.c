#include "main.h"

/**
 * flip_bits - A func that produces the no of bits to flip to
 *	get rom one no to another
 * @n: the first no
 * @m: the second no
 * Return: the no of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, res = 0;
	unsigned long int rec;
	unsigned long int sev = n ^ m;

	for (q = 63; q >= 0; q--)
	{
		rec = sev >> q;
		if (rec & 1)
			res++;
	}
	return (res);
}
