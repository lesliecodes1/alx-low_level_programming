#include "main.h"

/**
 * _strstr - Locates substring
 * @haystack: string located
 * @needle: string location
 * Return: substring and successful
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	char *h = haystack;
	char *n = needle;

	for (; h[i] != '\0'; i++)
	{
		for (; n[j] != '\0'; j++)
		{
			if (h[i] == n[j])
			{
				return (&n[j]);
			}
			else if(n[j] == '\0')
			{
				return NULL;
			}
		}
	}
	return (0);
}
