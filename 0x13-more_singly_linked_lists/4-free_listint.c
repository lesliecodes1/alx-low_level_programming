#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: start of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
