#include <stdio.h>

/**
 * main - Entry data
 *
 * Return: 0 on completion
 */

int main(void)
{
	int nab;

	for (nab = 0; nab < 10; nab++)
		putchar((nab % 10) + '0');

	putchar("\n");
	return (0);
}
