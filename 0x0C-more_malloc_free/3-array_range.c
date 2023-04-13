#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: values of array starting at
 * @max: values of array ending at
 * Return: Null if function fails,
 * pointer to newlt created array
 * if successful
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = calloc(size, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
