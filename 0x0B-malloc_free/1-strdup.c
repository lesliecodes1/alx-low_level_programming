#include "main.h"

/**
 * _strdup - returns pointer to newly allocated memory in heap,
 * which contains copy of string in parameter
 * @str: duplicated string
 * Return: pointer containing duped string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int len;

	i = len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr = malloc(len * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
