#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to parameter
 * @seperator: seperates numbers printed
 * @n: number of numbers to be printed
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
		i++;
	}
	printf("\n");
	va_end(args);
}
