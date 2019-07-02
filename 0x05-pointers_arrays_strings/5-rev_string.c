#include "holberton.h"

/**
 * rev_string - This function reverses a string
 * @s: The string to reverses
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i - 1; s[i] != '\0'; j--)
		{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
		}
	}
}
