#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: head of link list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t result = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		result++;
	}
	return (result);
}
