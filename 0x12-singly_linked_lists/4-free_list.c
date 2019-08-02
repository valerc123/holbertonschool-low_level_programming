#include "lists.h"
/**
* free_list - This function frees a list
* @head: head of the list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *iterator;

	if (!head)
	{
		return;
	}
	else
	{
		iterator = head;
		head = head->next;
		free(iterator->str);
		free(iterator);
	}
	free(head);
	return;
}
