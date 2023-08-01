#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at inex
 * @head: Head of a double pointer
 * @index: Index of the node
 * Return: head pointer to the index node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int d;
	listint_t *test, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	test = *head;
	for (d = 0; d < index - 1; d++)
	{
		if (test->next == NULL)
			return (-1);
		test = test->next;
	}
	next = test->next;
	test->next = next->next;
	free(next);
	return (1);
}
