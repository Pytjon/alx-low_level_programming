#include <stdlib.h>
#include "lists.h"
/**
 * list_len - finds the no of elements in a linked list
 * @h: the linked list
 * Return: the no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
