#include <stdio.h>
#include "dog.h"
/**
 * print_dog - This function prints a struct dog
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->age == 0)
	{
		d->age = 0;
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	return;
}
