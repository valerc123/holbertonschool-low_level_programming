#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - This function returns the length of a string
 * @s: Variable that contains a character array to be counted
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int  n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}

/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: Parameter to computer
 *@src: parameter
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - This function creates a new dog.
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *o;
	char *n;
	struct dog *newDog;
	int i, j;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
	{
		return (NULL);
	}

	i = _strlen(name);
	j = _strlen(owner);

	n = malloc(i + 1);
	if (n == NULL)
	{
		free(newDog);
		return (NULL);
	}
	o = malloc(j + 1);
	if (o == NULL)
	{
		free(newDog);
		free(n);
		return (NULL);
	}

	n = _strcpy(n, name);
	o = _strcpy(o, owner);

	newDog->name = n;
	newDog->age = age;
	newDog->owner = o;

	return (newDog);
}
