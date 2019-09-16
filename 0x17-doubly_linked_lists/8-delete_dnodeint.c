#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node int at index
 * @head: header
 * @index: index delete
 * Return: integer Success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *_clear;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	tmp = *head;

	while (tmp)
	{
		if ((count + 1) == index)
		{
			_clear = tmp->next;
			tmp->next = (tmp->next)->next;
			tmp->prev = (tmp->next)->prev;
			free(_clear);
			return (1);
		}
		else if (index == 0)
		{
			_clear = tmp;
			*head = tmp->next;
			if (tmp->next)
				(tmp->next)->prev = NULL;
			free(_clear);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}

	return (-1);
}
