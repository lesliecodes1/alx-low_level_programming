#include "main.h"
/**
 * _isdigit - digit checker
 * @c: input variable
 * Return: 1 for digit, o otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
