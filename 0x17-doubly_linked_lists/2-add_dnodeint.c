#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	while (*head != NULL)
	{
		(*head)->n = n;
		(*head)->next = *head;
		(*head)->prev = NULL;
		head = head;
	}

	return 0;
}
