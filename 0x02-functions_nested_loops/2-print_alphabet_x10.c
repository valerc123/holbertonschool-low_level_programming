#include "holberton.h"

/**
 * print_alphabet_x10 - This function prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int alphabet, i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
