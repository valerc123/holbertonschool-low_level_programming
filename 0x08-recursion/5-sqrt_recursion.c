#include "holberton.h"

/**
  *
  *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return root_square(n, 1);
	}
}

int root_square(n, y)
{
	if(y * y == n)
	{
		return (y);
	}
	
}

