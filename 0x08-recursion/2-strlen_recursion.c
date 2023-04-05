#include "main.h"

/**
 * _strlen_recursion - counts length of string
 * @s: input variable
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(++s);
	}
	return (len);
}
