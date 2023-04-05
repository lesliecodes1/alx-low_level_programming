#include "main.h"

/**
 * _pow_recursion - returns base x
 * raised to power y
 * @x: base number
 * @y: power number
 * Return: result of x power y,
 * -1 if power < 0, 1 if power = 0
 */
int _pow_recursion(int x, int y)
{
	int res;

	res = 0;
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		res = x * _pow_recursion(x, y - 1);
	}
	return (res);
}
