#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Check the code for my household members
 * @h: Name of the list
 * Return: The number of nodes
 */

size_t list_len(const list_t *h)
{
	int result = 0;

	while (h)
	{
		result++;
		h = h->next;
	}
	return (result);
}
