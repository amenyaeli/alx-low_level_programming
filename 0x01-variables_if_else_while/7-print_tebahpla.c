#include <stdio.h>

/**
 * main - Entry data
 *
 * Return: 0 on completion
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
