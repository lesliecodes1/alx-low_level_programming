#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @listint_t h: node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n" , h -> n);
		i++;
		h = h -> next;
	}
	return (i);
}
