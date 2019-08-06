#include "lists.h"

/**
 * free_listint - This function frees listint_t
 * @head: head of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	tmp = NULL;
}
