#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: input variable
 * Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(49);
		return (-1);
	}
	_putchar('\n');
}
