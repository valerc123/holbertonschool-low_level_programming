#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name.
 * @name: name to print
 * @f: pointer to funciton
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
