#include "search_algos.h"

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
		int mid, left, right;
		mid = size/2;

		if (array[mid]<value)
		{
			left=mid+1;
		}
		else if (array[mid]>value)
		{
			right=mid-1;
		}
		else
		{
			return (mid);
		}
		return (-1);
}
