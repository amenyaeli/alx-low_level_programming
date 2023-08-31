#include "main.h"

/**
 * print_binary - A func that prints the binary illustration of a no
 * @n: The no to print
 */

void print_binary(unsigned long int n)
{
	int m, res = 0;
	unsigned long int rec;

	for (m = 63; m >= 0; m--)
	{
		rec = n >> m;
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
