#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 *
 * @head: A pointer to the head of the list (pointer to a pointer).
 *
 * Description:
 * This function takes the address of the head of a listint_t linked list as an
 * argument. It frees each node in the list, releases the memory allocated for
 * them, and sets the head to NULL.
 *
 * Return: void (no return value)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL) {
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	/* Set the head to NULL after freeing the list*/
	*head = NULL;
}

