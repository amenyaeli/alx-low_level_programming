#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of the listint_t list
 * @head: Head of a double pointer
 * Return: Null
 */

int pop_listint(listint_t **head)
{
	listint_t *begn;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	begn = *head;
	*head = begn->next;
	n = begn->n;
	free(begn);
	return (n);
}
