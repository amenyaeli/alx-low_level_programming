#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that insers a new node
 *	at a given position
 * @head: Head of a double pointer
 * @idx: Index of the node
 * @n: New node value
 * Return: The address of n
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *test, *p;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		test = *head;
		for (d = 0; d < idx - 1 && test != NULL; d++)
		{
			test = test->next;
		}
		if (test == NULL)
			return (NULL);
	}
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	p->next = test->next;
	test->next = p;
	return (p);
}
