#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in asc order using
 * insertion sort algorithm and prints the list each time a swap is done
 *
 * @list: pointer to pointer with the address of first node
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *current = NULL, *prev = NULL;

	if (list != NULL)
	{
		tmp = *list;
		while (tmp != NULL)
		{
			current = tmp;
			prev = current->prev;
			while (current->prev != NULL && prev->n > current->n)
			{
				/*swap nodes*/

				prev->next = current->next;
				current->prev = prev->prev;
				current->next = prev;
				prev->prev = current;
				if (prev->next)
					prev->next->prev = prev;
				if (current->prev)
					current->prev->next = current;
				else
					*list = current;

				print_list(*list);
				prev = current->prev;
			}
			tmp = tmp->next;
		}
	}
}
