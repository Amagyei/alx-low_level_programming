#include "lists.h"

/**
 * print_listint - print all the nodes in a singly linked list
 *
 * @*h - pointer to list to be printed
 *
 * @n - pointer to list to be printed
 *
 * Return: 0 on success
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
