#include "main.h"

/**
 * rev_string - Reverses string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	char ginstr = s[0];
	int n = 0;
	int i;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		n--;
		ginstr = s[i];
		s[i] = s[n];
		s[n] = ginstr;
	}
}
