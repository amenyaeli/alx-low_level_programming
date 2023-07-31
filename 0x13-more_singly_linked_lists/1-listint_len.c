#include "lists.h"
#include <stdio.h>

/**
 * listint_len - The number of elements in a listint_t list
 * @h: head of the link list
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t result = 0;

	while (h != NULL)
	{
		h = h->next;
		result++;
	}
	return (result);
}
