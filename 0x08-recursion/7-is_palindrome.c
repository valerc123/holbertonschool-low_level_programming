#include "holberton.h"
/**
 * _strlen_recursion - This function returns the length of a string
 * @s: string for count
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * palindrome - compares `s' to itself from beginning to end
 * @s: original string
 * @n: end of original string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome(char *s, int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else if (*s != s[n - 1])
	{
		return (0);
	}
	else
	{
		return (palindrome((s + 1), (n - 2)));
	}
}

/**
 * is_palindrome - 1 if a string is a palindrome and 0
 * @s: pointer to string
 * Return: 1 if palindrome, 0 in not
 **/
int is_palindrome(char *s)
{
	int a;

	a = _strlen_recursion(s);
	if (a <= 0)
	{
		return (1);
	}
	else
	{
		return (palindrome(s, a));
	}
}
