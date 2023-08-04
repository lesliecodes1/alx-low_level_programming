#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to convert to binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
    unsigned long int mask;
    int flag = 0;

    mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
    while (mask != 0)
    {
        if ((n & mask) != 0)
        {
            flag = 1;
            putchar('1');
        }
        else if (flag == 1)
        {
            _putchar('0');
        }
        mask >>= 1;
    }

    if (flag == 0)
    {
        putchar('0');
    }
}
