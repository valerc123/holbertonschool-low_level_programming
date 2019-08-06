#include "lists.h"
/**
 * add_nodeint - Add new node at the begginning of a linked list
 * @head: head of a list
 * @n: value of n in the structure
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
