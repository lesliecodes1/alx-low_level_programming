#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument to function
 * @argv: argument to function
 * Return: successful
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
