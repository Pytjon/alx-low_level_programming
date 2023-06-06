#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: a pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fwd, *bkwd;

	if (head == NULL || *head == NULL)
		return (NULL);

	bkwd = NULL;
	while ((*head)->next != NULL)
	{
		fwd = (*head)->next;
		(*head)->next = bkwd;
		bkwd = *head;
		*head = fwd;
	}
	(*head)->next = bkwd;
	return (*head);
}
