#include "lists.h"
/**
 * *get_dnodeint_at_index - get node int at index
 * @head: header node
 * @index: get index
 * Return: get node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
