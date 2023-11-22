#include "lists.h"

/**
 * listint_len - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));


	ptr->n = n;
	ptr->next = *head;


	*head = ptr;
	return (*head);
}
