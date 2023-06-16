#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry data
 *
 * Return: 0 on completion
 */

int main(void)
{
	int n;
	int lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lnum = n % 10;
	if (lnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lnum);
	}
	else if (lnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lnum);
	}
	else if (lnum < 6 && lnum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lnum);
	}
	return (0);
}
