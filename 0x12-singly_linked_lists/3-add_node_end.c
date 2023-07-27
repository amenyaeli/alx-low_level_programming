#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - calculates the length of a string
 * @str: string to calculate the length of
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int n;

	for (n = 0; str[n]; n++)
		;
	return (n);
}

/**
 * add_node_end - Adds a new node to the end of linked list
 * @head: Double pointer to a linked list
 * @str: String to add to the new node
 * Return: Pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
