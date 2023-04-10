#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: input var
 * @s2: input var
 * Return: 15 when comparing, 0 when equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			return (0);
	}
	return (0);
}
