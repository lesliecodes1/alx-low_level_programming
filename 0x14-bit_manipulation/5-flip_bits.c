#include "main.h"

/**
 * flip_bits - returns no of bits needed to flip
 * to get from one no to another
 * @n: first number
 * @m: second number
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int num = 0;

	diff = n ^ m;
	while (diff != 0)
	{
		if (diff & 1)
			num++;
		diff >>= 1;
	}
	return (num);
}
