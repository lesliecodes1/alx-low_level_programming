#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: starting point of linked list
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *new;
	size_t i = 0;
	int j;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
