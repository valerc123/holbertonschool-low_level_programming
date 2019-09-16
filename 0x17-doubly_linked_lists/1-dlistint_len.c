#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements
 * in a linked dlistint_t list.
 * @h: points to the address of the first node.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
