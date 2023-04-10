#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: searched string
 * @accept: used bytes
 * Return: Successful
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}
