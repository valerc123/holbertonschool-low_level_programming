#include "sort.h"

/**
 * partition - place the pivot in its right index, then
 * apply divide and conquer and calls itself with the left array
 * and right array
 *
 * @array: array to be quick sorted
 * @start: start of array to be sorted
 * @end: end of array to be sorted
 * @size: total size of original array
 */

void partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end], temp;
	int i = start, j;

	if (start < end)
	{
		for (j = start; j <= end; j++)
		{
			if (array[j] < pivot)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				if (i != j)
					print_array(array, size);
				i++;
			}
		}
		if (array[i] != pivot)
		{
			temp = array[i];
			array[i] = pivot;
			array[end] = temp;
			print_array(array, size);
		}
		partition(array, start, i - 1, size);
		partition(array, i + 1, end, size);
	}
}

/**
 * quick_sort - uses Quick Sort algorthm. This algorithm uses dive and conquer
 * which uses recursion. It splits the problem into smaller problems
 *
 * @array: array to be quick sorted
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (size > 2 && array != NULL)
	{
		partition(array, 0, size - 1, size);
	}
}
