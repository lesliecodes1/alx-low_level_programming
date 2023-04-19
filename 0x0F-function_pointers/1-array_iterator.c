#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given aas parameter
 * @array: string variable
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
