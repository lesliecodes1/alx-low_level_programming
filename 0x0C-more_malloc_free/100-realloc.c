#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: previous memory block address
 * @old_size: previous memory block size
 * @new_size: new memory block size
 * Return: pointer if new_size = old_size,
 * Null if new sizeand ptr are uninitialized,
 * pointer to new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		nptr = realloc(ptr, new_size);
		free(ptr);
	}
	nptr = realloc(ptr, new_size);
	free(ptr);
	return (nptr);
}
