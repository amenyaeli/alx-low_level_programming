#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: Head pointer to the beginning of the list
 * Return: Address of the node or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tea, *eli;

	tea = eli = head;
	while (tea && eli && eli->next)
	{
		tea = tea->next;
		eli = eli->next->next;
		if (tea == eli)
		{
			tea = head;
			break;
		}
	}
	if (!tea || !eli || !eli->next)
		return (NULL);
	while (tea != eli)
	{
		tea = tea->next;
		eli = eli->next;
	}
	return (eli);
}
