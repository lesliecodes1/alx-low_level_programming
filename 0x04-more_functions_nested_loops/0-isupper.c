#include "main.h"
/**
 * _isupper - uppercase alphabets
 * @c: input variable
 * Return: 1 for uppercase, o for others
 */
int _isupper(int c)
{
	if ((c >= 65) && (c<=90))
	{
		return (1);
	}
	else
		return (0);
}
