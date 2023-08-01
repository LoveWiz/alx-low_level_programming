#include "lists.h"
#include <stdio.h>

/**
 * print_listint - returns number of nodes
 * @h: pointer to the head of linked list
 * Return: number of of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
