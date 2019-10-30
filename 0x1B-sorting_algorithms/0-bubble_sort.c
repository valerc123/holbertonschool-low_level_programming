#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array will be sort
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i, k;
	int tmp = 0;
	int ordered, var1, var2;

	for (k = 0; k < size; k++)
	{
		ordered = 0;
		for (i = 0; i < (size - 1); i++)
		{
			var1 = array[i];
			var2 = array[i + 1];
			if (var1 > var2)
			{
				tmp = var1;
				array[i] = var2;
				array[i + 1] = tmp;
				print_array(array, size);
				ordered = 1;
			}
		}
		if (!ordered)
			break;
	}
}
