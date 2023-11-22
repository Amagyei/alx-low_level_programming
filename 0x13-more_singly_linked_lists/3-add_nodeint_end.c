#include "lists.h"

/**
 * add_nodeint_end - function to add node to end of list
 *
 * @head: pointer to head of the list
 *
 * @n: int to be added to the list
 *
 * Description: uses code adn t
 *
 * Return: address of the new element or null 
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t ptr, *temp;

	*temp = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return NULL;

	ptr = *head;
	temp->n = n;
	temp->next = NULL;


	while (next != NULL)
	{
		ptr = *head->next; 
	}
	ptr->next = temp;

}
