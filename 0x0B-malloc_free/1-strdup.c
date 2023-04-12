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

	len = 0;
	while (str[len] != '\0')
		len++;
	ptr = malloc(len * sizeof(char));

	if (str == NULL || ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
