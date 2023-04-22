#include "variadic_functions.h"

/**
 * print_strings - prints strings in its parameter
 * @seperator: seperates strings
 * @n: number of strings printed
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *c;

	va_start(args, n);
	while (i < n)
	{
		c = va_arg(args, char*);
		if (!c)
			printf("nil");
		printf("%s", c);
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
		i++;
	}
	printf("\n");
	va_end(args);
}
