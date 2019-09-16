#include "lists.h"
/**
 * sum_dlistint - Sum all data (n) of a dlistint_t linked list
 * @head: header
 * Return: sum all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
