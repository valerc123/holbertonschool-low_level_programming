#include "holberton.h"

/**
 * *_strcat - This function concatenate two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; )
	{

		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}

