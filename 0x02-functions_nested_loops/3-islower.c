#include "main.h"
/**
 * _islower - returns 1 if lowercase letter,
 * otherwise returns 0
 * @c: ASCII character
 * Return: 1 for lowercase, 0 the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	_putchar('\n');
}
