#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: head of the double pointer
 * @n: int added to the list
 * Return: NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *test;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	test = malloc(sizeof(listint_t));
	if (test == NULL)
		return (NULL);
	test->n = n;
	test->next = NULL;
	if (*head == NULL)
	{
		*head = test;
		return (test);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = test;
	return (test);
}
