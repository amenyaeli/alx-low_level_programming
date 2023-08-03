#include "main.h"

/**
 * print_binary - A function that prints the representation of no
 * @n: The binary number to print
 */

void print_binary(unsigned long int n)
{
	int d, res = 0;
	unsigned long int rec;

	for (d = 63; d >= 0; d--)
	{
		rec = n >> d;
		if (rec & 1)
		{
			_putchar('1');
			res++;
		}
		else if (res)
			_putchar('0');
	}
	if (!res)
		_putchar('0');
}
