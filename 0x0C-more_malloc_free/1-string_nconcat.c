#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: s2 concatenated to n
 * Return: Null if function fails,
 * pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	i = j = 0;
	if (s1 == NULL && s2 != NULL)
		s1 = "";
	else if (s1 != NULL && s2 == NULL)
		s2 = "";
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		ptr = malloc((i + n + 1) * sizeof(char));
	else
		ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = j = 0;
	for (; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (; s2[j] != '\0' && j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
