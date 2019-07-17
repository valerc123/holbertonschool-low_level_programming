#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes with char c
 *
 * @size: size of new array
 * @c: string
 * Return: pointer of the address of the new array
 */
char *create_array(unsigned int size, char c)
{
	char *newArray;
	unsigned int i = 0;

	newArray = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (0);
	}
	if (!newArray)
	{
		return (0);
	}
	while (i < size)
	{
		newArray[i] = c;
		i++;
	}
	return (newArray);
}
