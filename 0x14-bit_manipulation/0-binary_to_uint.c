#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary to be converted
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0;
	unsigned int res = 0;
	int pow = 1;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			res += pow;
		else if (b[i] != '0')
			return (0);
		pow *= 2;
	}
	return (res);
}
