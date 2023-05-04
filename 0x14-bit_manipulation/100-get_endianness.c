#include "main.h"

/**
 * get_endianness - checks the machine endianness
 * Return: 1 if little endian,
 * 0 if big endian
 */
int get_endianness(void)
{
	int num = 1;
	char *p = (char *) &num;

	if (*p == 1)
		return (1);
	else
		return (0);
}
