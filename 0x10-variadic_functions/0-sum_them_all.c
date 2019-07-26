#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function returns the sum of all arguments
 * @n: number of arguments
 * Return: sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list_arg;

	if (n == 0)
	{
		return (0);
	}
	va_start(list_arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list_arg, int);
	}
	va_end(list_arg);
	return (sum);
}
