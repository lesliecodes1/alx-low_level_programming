#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int n = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (n = len; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
