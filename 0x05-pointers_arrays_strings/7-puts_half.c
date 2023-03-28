#include "main.h"

/**
 * puts_half - prints last half of the string
 * @str: input var
 * Return: void
 */
void puts_half(char *str)
{
	char *y = str;
	int n = 0;
	int count;
	int odd;
	int even;
	int i;

	while (*y != '\0')
	{
		n++;
		y++;
	}
	count = n - 1;
	odd = (((count - 1) / 2));
	even = count / 2;
	for (i = 0; i <= count; i++)
	{
		if (i > odd && i > even)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
