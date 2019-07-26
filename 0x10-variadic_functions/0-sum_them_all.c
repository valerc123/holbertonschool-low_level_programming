#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
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
