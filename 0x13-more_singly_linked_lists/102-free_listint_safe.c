#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory for a listint_t list
 * @list: The old list to append
 * @size: Size of the new list
 * @new: New node to add
 * Return: Pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **adding;
	size_t d;

	adding = malloc(size * sizeof(listint_t *));
	if (adding == NULL)
	{
		free(list);
		exit(98);
	}
	for (d = 0; d < size - 1; d++)
		adding[d] = list[d];
	adding[d] = new;
	free(list);
	return (adding);
}

/**
 * free_listint_safe - free a listint_t list
 * @head: Head pointer to the start of the list
 * Return: The number of nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t d, no = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (no);
	while (*head != NULL)
	{
		for (d = 0; d < no; d++)
		{
			if (*head == list[d])
			{
				*head = NULL;
				free(list);
				return (no);
			}
		}
	no++;
	list = _ra(list, no, *head);
	next = (*head)->next;
	free(*head);
	*head = next;
	}
	free(list);
	return (no);
}
