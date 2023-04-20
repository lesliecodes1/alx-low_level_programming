#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: input variable
 * @size: size of array
 * @cmp: function pointer
 * Return: -1 if unsuccessful,
 * integer found
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
