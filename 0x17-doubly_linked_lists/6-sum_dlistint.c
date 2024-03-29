#include "lists.h"

/**
 * sum_dlistint - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 *
 *
 * Return: If the node at the given index exists, return a pointer to that node.
 *         Otherwise, return NULL.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return sum;
}

