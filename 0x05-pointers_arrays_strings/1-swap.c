#include "main.h"

/**
 * swap_int - swaps integers
 * @a: input
 * @b: input
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
