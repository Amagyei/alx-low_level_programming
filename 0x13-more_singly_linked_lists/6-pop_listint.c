#include "lists.h"

/* pop_listint - delete the head of a list
 *
 * @head: pointer to head of the list
 *
 * Description: it deletes the head node and sets the next node as head
 *
 * Return: data from new head node 
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if(*head == NULL)
		return (0);
	ptr = *head;
	free(*head);

	*head = ptr->next;
	data = ptr->n;
	free(ptr);
	ptr = NULL;
	
	return data;
}
