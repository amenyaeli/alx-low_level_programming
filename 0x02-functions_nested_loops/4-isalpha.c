#include "main.h"

/**
 * _ialpha - Checks for alphabet character
 * @c: The charcter to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _ialpha(int c)

{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
