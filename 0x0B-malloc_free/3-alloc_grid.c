#include "main.h"

/**
 * alloc_grid - returns pointer to a 2d array of integers
 * @width: columns of array
 * @height: rows of array
 * Return: Null on failure,
 * and if width or height is 0 or -ve,
 * pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	i = j = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int*));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
