#include "lists.h"
/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: counter
 */

int _strlen(const char *s)
{
	int count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}
/**
* add_node_end - This function adds new node at the end of a list
* @head: the header list
* @str: string
* Return: The address of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *last = *head;
	list_t new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
		
	new_node->str = strdup(str);
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
