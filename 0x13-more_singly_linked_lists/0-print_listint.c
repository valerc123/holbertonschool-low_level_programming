#include "lists.h"
/**
 * print_listint - This function prints all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int elements;

	elements = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("(nil)\n");
			elements++;
		}
		else
		{
			printf("%d\n", h->n);
			elements++;
		}
		h = h->next; /* The pointer points to the next node*/
	}
	return (elements);
}

