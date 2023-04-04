#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory copied to
 * @src: memory copied from
 * @n: no of bytes copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
