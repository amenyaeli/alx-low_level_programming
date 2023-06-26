#include "main.h"

/**
 * puts2 - function should print only one charater out of two
 * starting with the first one
 * @str:input
 * Return: print
 */

void puts2(char *str)
{
	int longa = 0;
	int m = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		longa++;
	}
	m = longa - 1;
	for (o = 0; o <= m; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
