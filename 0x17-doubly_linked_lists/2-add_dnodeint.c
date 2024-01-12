#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	if (*head != NULL)
		(*head)->prev = ptr;
	(*head) = ptr;


return ptr;
}
