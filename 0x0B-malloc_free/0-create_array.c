#include "main.h"

/**
 * create_array - creates array of chars,
 * initializes with a specific char
 * @size: size of array
 * @c: specific char
 * Return: Null if size = 0,
 * pointer to the array if size > 0
 */
char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
