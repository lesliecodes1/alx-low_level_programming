#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: input var
 * @b: input var
 * @n: bytes filled
 * Return: filled memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *m = &b;

	i = 0;
	while (i < n)
	{
		s[i] = *m;
		i++;
	}
	return (s);
}
