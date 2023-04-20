#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds integers
 * @a: input integer
 * @b: input integer
 * Return: addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: input integer
 * @b: input integer
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: input variable
 * @b: input variable
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: input variable
 * @b: input variable
 * Return: division result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of integers
 * @a: input variable
 * @b: input variable
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
