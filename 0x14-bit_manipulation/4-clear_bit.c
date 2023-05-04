#include "main.h"

/**
 * clear_bit - sets the value of bit at index to 0
 * @n: input number
 * @index: index at bit to change
 * Return: 1 if it worked,
 * -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	num = 1UL << index;
	num = ~num;

	*n &= num;
	return (1);
}
