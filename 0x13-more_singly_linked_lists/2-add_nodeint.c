#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: head of the double pointer
 * @n: int added to the list
 * Return: NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	if (head == NULL)
		return (NULL);
	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);
	k->n = n;
	k->next = *head;
	*head = k;
	return (k);
}
