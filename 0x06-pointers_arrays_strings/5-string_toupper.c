#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @n: pointer
 *
 * Return: string
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] -= 32;
		}
	}
	return (n);
}
