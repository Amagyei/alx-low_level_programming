#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 *
 * @head: A pointer to the head of the list.
 *
 * Description:
 * This function takes the head of a listint_t linked list as an argument
 * and frees each node in the list, releasing the memory allocated for them.
 *
 * Return: void (no return value)
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}
}

