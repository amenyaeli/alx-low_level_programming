#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function that returns the nth node
 * @head: Head of the first node
 * @index: The index of the node
 * Return: Head of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int d;

	if (head == NULL)
		return (NULL);
	for (d = 0; d < index; d++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
