#include "lists.h"
/**
 * dlistint_len - dlistint length
 * @h: header
 * Return: legth node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
/**
 * *insert_dnodeint_at_index - insert node in index
 * @h: header
 * @idx: index
 * @n: new data
 * Return: Return new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	size_t len;
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	len = dlistint_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (len == idx)
		return (add_dnodeint_end(h, n));

	tmp = *h;

	while (tmp)
	{
		if ((count + 1) == idx)
		{
			new->next = tmp->next;
			tmp->next = new;
			new->prev = tmp;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	free(new);
	return (NULL);
}
