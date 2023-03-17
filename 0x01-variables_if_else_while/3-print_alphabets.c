#include <stdio.h>
/**
 * main - program entry point
 * Description: print lowercase and uppercase alphabet
 * Return: always 0
 */
int main(void)
{
	int a = 97;
	int A = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
