#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums
 * @a: input array
 * @size: size of rows and columns
 * Return: void none
 */
void print_diagsums(int *a, int size)
{
	int i, d, f;

	d = 0;
	f = 0;

	for (i = 0; i < size; i++)
	{
		d = d + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		f += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", d, f);
}
