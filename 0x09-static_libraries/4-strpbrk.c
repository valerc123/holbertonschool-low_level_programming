#include "holberton.h"
/**
 * _strpbrk - locate first occurence of characters from `accept' in `s'
 * @s: string to search
 * @accept: characters to search for
 * Return: pointer to first byte from `s' matching `accept', or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int k = 0;

	for (i = 0; s[i] > '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (s + i);
}
