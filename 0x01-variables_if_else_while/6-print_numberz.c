#include <stdio.h>
/**
 * main - entry point
 * Declaration: print all base numbers from 0 to 10 using putchar
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
