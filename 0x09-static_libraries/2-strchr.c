#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string searched
 * @c: character found
 * Return: successful
 */
char *_strchr(char *s, char c)
{
	int i;
	char *b = &c;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == *b)
			return (&s[i]);
		i++;
	}
	return (0);
}
