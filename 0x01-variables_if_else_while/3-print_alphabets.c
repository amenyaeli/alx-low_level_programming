#include <stdio.h>

/**
 * main - Entry data
 *
 * Return: 0 on completion
 */

int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCsae <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	while (upperCase <= 'z')
	{
		putchar(upperCase);
		upperCase += 1;
	}
	putchar('\n');
	return (0);
}
