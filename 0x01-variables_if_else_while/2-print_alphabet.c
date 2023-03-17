#include <stdio.h>
/**
 * main - entry point
 * Description: Prints Alphabet lowercase
 * Return: always 0 successful
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
