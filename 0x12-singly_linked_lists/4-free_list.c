#include "lists.h"
/**
* free_list - This function frees a list
* @head: head of the list
* Return: void
*/
void free_list(list_t *head)
{
	list_t *iterator;

	while (head != NULL)
	{
		iterator = head;
		free(iterator->str);
		free(iterator);
		head = head->next;
	}
}
