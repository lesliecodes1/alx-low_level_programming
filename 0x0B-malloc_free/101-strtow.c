#include "main.h"

/**
 * strtow - splits a string into words
 * @str: split string
 * Return: Null if str = null or "",
 * if function fails,
 * and pointer to split words
 * in heap memory
 */
char **strtow(char *str)
{
	int i, j, len;
	int *ptr;
	int *c = &str;

	i = j = len = 0;
	if (c == NULL || c[i] == "")
		return (NULL);
	while (c[len] != '\0')
		len++;
	ptr = malloc((len + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (; c[j] != '\0'; j++)
	{
		if (c[j] == " ")
			i++;
		for (; c[i] != " "; i++)
			ptr[i] = c[i];
		ptr[i] = '\0';
		_putchar('\n');
	}
	return (ptr);
}
