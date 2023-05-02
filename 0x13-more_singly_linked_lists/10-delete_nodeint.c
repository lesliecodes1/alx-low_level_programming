#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * of a linked list
 * @head: starting point of linked list
 * @index: node to be deleted
 * Return: 1 if succeeded,
 * -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (new || new->next)
	{
		if (i == index - 1)
		{
			temp = new->next;
			new->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		new = new->next;
	}
	return (-1);
}
