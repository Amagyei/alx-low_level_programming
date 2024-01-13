#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	ptr->n = n;	
	ptr->next = NULL;

	if ((*head) == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
		return 0;
	}
	while (last->next != NULL)
        	last = last->next;
        
	last->next = ptr;
	ptr->prev = last;	

	return 0;
}
