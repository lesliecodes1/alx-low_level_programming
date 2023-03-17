#include <stdio.h>
/**
 * main - entry point
 * Description: print 10 base 10 numbers from 0
 * Return: always 0
 */
int main(void)
{
	int a = 0;

	for (a; a < 10; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
