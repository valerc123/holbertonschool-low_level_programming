#include "lists.h"
/**
 * free_dlistint - free_dlistint
 * @head: header
 * Return: header
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
