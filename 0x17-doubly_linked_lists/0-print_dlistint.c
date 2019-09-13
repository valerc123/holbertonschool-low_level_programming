#include "lists.h"
/**
* print_dlistint - Prints all the elements of a dlistint_t list
* @h: pointer to a list
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t elements = 0;
const dlistint_t *tmp = h;

if (h == NULL)
return (0);
while (tmp != NULL)
{
printf("%d\n", tmp->n);
elements++;
tmp = tmp->next;
}
return (elements);
}
