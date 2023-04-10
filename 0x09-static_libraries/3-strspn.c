#include "main.h"

/**
 * _strspn - returns length of substring
 * @s: input var
 * @accept: only bytes from input
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *d = ",";
	int len = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0' && s[i] != *d)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			for (i = 0; s[i] != *d; i++)
			{
				if (s[i] == accept[j])
				{
					len++;
				}
			}
		}
	}
	return (len);
}
