#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (new_node == NULL)
	{
		/* Return NULL if malloc fails */
		return NULL;
	}

	new_node->n = n;

	if (idx == 0)
	{
		/* Insert at the beginning of the list */
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}

		*h = new_node;
		return new_node;
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			/* If it is not possible to add the new node at index idx, return NULL */
			free(new_node);
			return NULL;
		}

		current = current->next;
	}

	if (current == NULL)
	{
		/* If it is not possible to add the new node at index idx, return NULL */
		free(new_node);
		return NULL;
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;

	return new_node;
}

