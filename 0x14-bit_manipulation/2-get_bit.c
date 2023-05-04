#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: input number
 * @index: position of bit to be returned
 * Return: value of bit at index,
 * -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	num = 1UL << index;
	if ((n & num) != 0)
		return (1);
	else
		return (0);
}
