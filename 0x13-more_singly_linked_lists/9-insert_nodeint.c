#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: pointer to the first node in the list
 * @idx: given index where new node is added
 * @n: data to insert in new node
 * Return: address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temo->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (new);
}
