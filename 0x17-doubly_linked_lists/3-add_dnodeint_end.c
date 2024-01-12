#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->prev = (*head):
	(*head)->n = n;
	(*head)->next = NULL;
	
		

	return 0;
}
