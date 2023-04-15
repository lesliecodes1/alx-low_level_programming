#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers in argument
 * @argc: argument variable
 * @argv: argument variable
 * Return: not successful if arguments not enough,
 * successful if arguments enough
 */
int main(int argc, char *argv[])
{
	int i, res;

	i = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res = atoi(argv[i]) * atoi(argv[i + 1]);
	printf("%d\n", res);
	return (0);
}
