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
	if (s1[i] > s2[i])
	{
		return (15);
	}
	else if (s1[i] < s2[i])
	{
		return (-15);
	}
	else
		return (0);
}
