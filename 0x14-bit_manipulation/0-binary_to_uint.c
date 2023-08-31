#include "main.h"

/**
 * binary_to_uint - This funct converts a binary no to unsigned integer
 * @b: The string that has the binary no
 * Return: The converted no or 0 if there is one or mor chars
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int dmal = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		dmal = 2 * dmal + (b[m] - '0');
	}
	return (dmal);
}
