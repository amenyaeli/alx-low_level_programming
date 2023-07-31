#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t list
 * @head: The head of the listint_t list
 * Return: NULL if it failed
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
			head = next;
	}
}
