#include "lists.h"
/**
 * free_listint2 - This function frees a listint_t list
 * @head: head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	tmp = NULL;
}
