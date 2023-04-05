#include "main.h"

/**
 * factorial - finds factorial of given no
 * @n: input variable
 * Return: factorial, 1 if n is 0,
 * -1 if n < 0
 */
int factorial(int n)
{
	int res;

	res = 0;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		res = n * factorial(n - 1);
	}
	return (res);
}
