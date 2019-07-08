#include "holberton.h"
/**
 * _strstr - locate first occurrence of `needle' in `haystack'
 * @haystack: string to search
 * @needle: string to search for
 *
 * Return: pointer to beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int k = 0;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (needle[k] == haystack[i])
			{
				return (haystack[i]);
			}
			else
			{
				return ('\0');
			}
		}
	}
 }
