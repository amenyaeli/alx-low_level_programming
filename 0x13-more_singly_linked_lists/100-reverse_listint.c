#include "lists.h"

/**
 * reverse_listint - Function that reverse a listint_t
 * @head: Head of a double pointer
 * Return: Pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *revs, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	revs = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = revs;
		revs = *head;
		*head = next;
	}
	*head = revs;
	return (*head);
}
