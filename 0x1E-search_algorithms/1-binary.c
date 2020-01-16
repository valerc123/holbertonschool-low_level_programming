#include "search_algos.h"

/**
 * print_subarray - Print the array being searched every time it changes
 * @array: array to print
 * @left: elements of left
 * @right: elements of right
 * Return: Void
 */

void print_subarray(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%i", array[i]);
		if (i == right)
			putchar(10);
		else
			printf(", ");
	}
}

/**
 * binary_search - searches a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, left = 0, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		print_subarray(array, left, right);

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
