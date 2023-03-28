#include "main.h"

/**
 * puts2 - print every other character
 * starting with first one
 * @str: input var
 * Return: void
 */
void puts2(char *str)
{
	int n = 0;
	int count = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		n++;
		y++;
	}
	count = n - 1;
	for (i = 0 ; i <= count ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
