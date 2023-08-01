#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Function that returns the sum of all data(n)
 * @head: Head to the first node
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
