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
* add_node - This function adds a new node at the beginning of a list
* @head: header of the list
* @str: const name
* Return: Address to new nodo
*/
list_t *add_node(list_t **head, const char *str)
{
	/*allocate new node*/
	list_t *new_node =  malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);


	/*put in the data and copy*/
	new_node->str = strdup(str);
	/*gets length of element*/
	new_node->len = _strlen(str);
	/*make next of new_node as head*/
	new_node->next = *head;
	/* move the head to point to the new node*/
	*head = new_node;
	return (new_node);
}
