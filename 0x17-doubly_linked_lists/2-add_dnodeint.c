#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	*head->n = n;
	*head->next = head;
	*head->previous = NULL;
	head = head;
}
