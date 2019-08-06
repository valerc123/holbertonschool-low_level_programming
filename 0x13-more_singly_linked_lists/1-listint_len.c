#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked list
 * @h: header of a linked list
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	int elements;

	elements = 0;
	while (h)
	{
		elements++;
	h = h->next;
	}
	return (elements);
}
