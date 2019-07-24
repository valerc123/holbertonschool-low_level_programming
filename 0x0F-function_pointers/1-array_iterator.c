#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - This functio iterate an array
 * @array: pointer
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if(action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
