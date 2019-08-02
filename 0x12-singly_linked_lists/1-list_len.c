#include "lists.h"
/**
* list_len - This function returns the number of elements in a linked list
* @h: list
* Return: length of elements of the list
*/
size_t list_len(const list_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
