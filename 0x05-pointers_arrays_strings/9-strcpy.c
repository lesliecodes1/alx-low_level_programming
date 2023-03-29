#include "main.h"

/**
 * _strcpy - copies string to another
 * @dest: input var
 * @src: input variable
 * Return: copied string from src
 */
char *_strcpy(char *dest, char *src)
{
	char *s = src;
	char *d = dest;
	int n = 0;
	int count;
	int i;

	while (*(s + n) != '\0')
	{
		n++;
	}
	count = n;
	for (i = 0; i < count; i++)
	{
		d[i] = s[i];
	}
	d[count] = '\0';
	return (d);
}
