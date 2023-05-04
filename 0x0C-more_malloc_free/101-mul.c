#include "main.h"

/**
 * is_base10_digit - checks whether number is base10 digit
 * @i: input variable
 * Return: not successful if input is empty,
 * successful if input is digit
 */
int is_base10_digit(char *i)
{
	while (*i)
	{
		if (i == "")
			return (1);
		else if (isdigit(*i++) == 0)
			return (0);
		else if (isdigit(*i++) != 0)
			return (1);
	}
}
/**
 * mul - multiplies two positive numbers
 * @num1: input variable
 * @num2: input variable
 * Return: pointer to result of multiplication
 */
int *mul(int num1, int num2)
{
	int *res;

	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}
	else if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (1)
	{
		is_base10_digit(num1);
		is_base10_digit(num2);
		printf("Error\n");
		exit(98);
	}
	else
	{
		res = num1  * num2;
	}
	return (res);
	_putchar('\n');
}
