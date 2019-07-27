#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers.
 * @separator: is the string to be printed between numbers.
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (separator == NULL)
		{
			continue;
		}
		else if (i == (n - 1))
		{
		/*Don't print the last comma*/
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
