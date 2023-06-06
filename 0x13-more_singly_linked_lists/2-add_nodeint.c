#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the linked list
 * @n: value to insert in thhe new node
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
