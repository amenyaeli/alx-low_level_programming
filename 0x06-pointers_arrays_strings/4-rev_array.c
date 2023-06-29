#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: numver of elements of array
 * return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
