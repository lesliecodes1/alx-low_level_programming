#include <stdio.h>
/**
 * main - entry point
 * Description: print 10 base 10 numbers from 0
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
