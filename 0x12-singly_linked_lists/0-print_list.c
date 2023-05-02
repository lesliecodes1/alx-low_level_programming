#include "lists.h"

/**
 * print_list - prints all element of a linked list
 * @h: starting point of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d]%s\n", h->len, h->str);
		else if (h->str == NULL)
			printf("[0](nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
