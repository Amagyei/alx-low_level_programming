#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position in a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
	{
		/* Return -1 if the list is empty */
		return -1;
	}

	if (index == 0)
	{
		/* If the node to be deleted is the first node */
		*head = current->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(current);
		return 1;
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			/* Return -1 if the index is out of bounds */
			return -1;
		}

		current = current->next;
	}

	if (current == NULL)
	{
		/* Return -1 if the index is out of bounds */
		return -1;
	}

	current->prev->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);

	return 1;
}

