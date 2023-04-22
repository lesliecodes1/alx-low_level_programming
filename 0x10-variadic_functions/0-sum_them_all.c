#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - sums all numbers in function parameters
 * @n: first parameter
 * Return: successful if n = 0,
 * sum if numbers constant
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
