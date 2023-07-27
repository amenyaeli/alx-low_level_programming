#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Check the code for members in my family
 * @h: Name of the list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int result = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		result++;
		h = h->next;
	}
	return (result);
}
