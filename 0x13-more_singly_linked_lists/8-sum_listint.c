#include "lists.h"

/**
 * sum_listint - sums all data on a linked list
 * @head: starting point of linked list
 * Return: sum of linked list,
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
