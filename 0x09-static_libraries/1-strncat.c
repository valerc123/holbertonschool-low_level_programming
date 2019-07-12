#include "holberton.h"

/**
 * *_strncat - This function concatenate two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * @n: integer limit
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++, i++)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
	}
	return (dest);
}
