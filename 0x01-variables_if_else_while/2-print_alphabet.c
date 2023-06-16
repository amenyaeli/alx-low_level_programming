#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry data
 *
 * Return: 0 on completion
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
