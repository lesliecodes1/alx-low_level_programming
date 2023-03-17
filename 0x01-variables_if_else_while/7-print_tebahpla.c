#include <stdio.h>
/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: always 0
 */
int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
