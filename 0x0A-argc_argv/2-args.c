#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: argument variable
 * @argv: argument variable
 * Return: successful
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
