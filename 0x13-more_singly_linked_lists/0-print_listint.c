#include "lists.h"

/**
 * size_t print_listint - print all the nodes in a singly linked list
 *
 * @h - pointer to list to be printed
 *
 * Description: prints each node of a list
 *
 * Return: 0 on success 
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	while(h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
