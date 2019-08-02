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
		return;
	iterator = head;
	if (!iterator)
	{
		return;
	}
	while (iterator->next)
	{
		iterator = iterator->next;
		free(iterator);
	}
}
