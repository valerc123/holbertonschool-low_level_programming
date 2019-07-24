#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array parameter
 * @size: number of elements in array
 * @cmp: pointer to function that compares values
 * Return: index of the first element which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int match, i;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		match = cmp(array[i]);
		if (match != 0)
		{
			return (i);
		}
	}
	return (-1);
}
