#include "lists.h"

/**
 * print_list - print the length and string of the list
 * @h: List
 *
 * Return: the number of elemnts.
 */

size_t print_list(const list_t *h)
{
	char length; /*The numbers of nodes*/
	
	while(h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			length++;
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
			length++;
		}
		h = h->next; /* The pointer points to the next node*/
	}
	return (length);
}
