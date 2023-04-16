#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * strnum - helper function to check if string passed
 * to parameter is digit
 * @str: string variable
 * Return: 0 if false,
 * 1 if true
 */
int strnum(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}


/**
 * main - program that adds positive numbers
 * @argc: argument variable
 * @argv: argument variable
 * Return: successful for sum,
 * unsuccessful if not sum
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (strnum(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
