#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - This function prints anything
 * @format: is a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	char *str;
	va_list list_all;
	int i = 0;

	va_start(list_all, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(list_all, int));
			break;
			case 'i':
			printf("%d", va_arg(list_all, int));
			break;
			case 'f':
			printf("%f", va_arg(list_all, double));
			break;
			case 's':
			str = va_arg(list_all, char *);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		 format[i] == 's') && (format[i + 1] != '\0'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list_all);
}
