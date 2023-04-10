#include "main.h"
/**
 * _isalpha - returns 1 if alphabet,
 * 0 otherwise
 * @c: input variable
 * Return: 1 for alphabet, 0 the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
