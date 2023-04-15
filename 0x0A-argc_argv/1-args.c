#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints no of arguments passed to command line
 * @argc: argument variable
 * @argv: argument variable
 * Return: successful
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc && argv[i])
		i++;
	printf("%d\n", i - 1);
	return (0);
}
