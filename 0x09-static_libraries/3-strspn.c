#include "holberton.h"

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: initial string
 * @accept: second string
 * Description: Returns the number of bytes in the initial segment of s
 * Return: p
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j = 0;
	unsigned int k = 0;

	for (i = 0; s[i] > ' '; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
			{
				j += 1;
			}
		}
	}
	return (j);
}
