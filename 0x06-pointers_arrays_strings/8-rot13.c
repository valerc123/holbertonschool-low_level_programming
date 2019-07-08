#include "holberton.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @n: pointer to 1st char of string to be reverse.
 * Return: char.
 */
char *rot13(char *n)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 51 ; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
