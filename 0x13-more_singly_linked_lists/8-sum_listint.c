#include  "lists.h"


/**
 * sum_listint - gets data from a node at an index
 *
 * @head: pointer to the list
 *
 *
 * Description: traverse eac node till you find the one we are looking for 
 *
 * Return: data or NULL
 */

int sum_listint(listint_t *head)
{
    int sum = 0;
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr = head;

	while (ptr->next != NULL)
	{
		ptr = ptr-> next;
        sum += ptr -> n;
	}
	
	return (sum);
}
