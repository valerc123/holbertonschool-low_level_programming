#include "holberton.h"
/**
 * *_strncpy - Copies up to n characters from  src to dest.
 * @dest:  pointer to the destination array where the content is to be copied.
 * @src: This is the string to be copied
 * @n: The number of characters to be copied from source.
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
