#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: binary number to convert
 * Return: result,
 * 0 if number is not binary or NULL
 */

unsigned int binary_to_uint(const char *b)
{

    size_t len = 0;
    size_t i;
    unsigned int result = 0;

    if (b == NULL)
    {
        return (0);
    }

    while (b[len] != '\0')
    {
        if (b[len] != '0' && b[len] != '1')
        {
            return (0);
        }
        len++;
    }

    for (i = 0; i < len; i++)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            return (0);
        }
    }

    for (i = 0; i < len; i++)
    {
        result = result << 1;
        result += b[i] - '0';
    }

    return (result);
}