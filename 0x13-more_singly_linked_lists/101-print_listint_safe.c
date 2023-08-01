#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - Function that rellocates memory for listint_t linked list
 * @list: The old list to append
 * @size: Size of the new list
 * @new: New node to add to the list
 * Return: Pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **adding;
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
 * print_listint_safe - Function that prints a listint_t list
 * @head: Head pointer to the start of the list
 * Return: The number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t d, no = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (d = 0; d < no; d++)
		{
			if (head == list[d])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (no);
			}
		}
		no++;
		list = _r(list, no, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (no);
}
