#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: size of array
 * Return: Null if function fails,
 * pointer to array is successful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
