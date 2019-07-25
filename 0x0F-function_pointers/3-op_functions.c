#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - This function returns the sum of a and b
 * @a: first digit
 * @b: second digit
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	int result = a + b;

	return (result);
}
/**
 * op_sub - This function returns the difference of a and b
 * @a: first digit
 * @b: second digit
 * Return: the substraction of a and b
 */
int op_sub(int a, int b)
{
	int result = a - b;

	return (result);
}
/**
 * op_mul - This function returns the product of a and b
 * @a: first digit
 * @b: second digit
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	int result = a * b;

	return (result);
}
/**
 * op_div - This function returns of the division of a by b
 * @a: first digit
 * @b: second digit
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - This function returns the remaider of the division of a by b
 * @a: first digit
 * @b: second digit
 * Return: the substraction of a and b
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
