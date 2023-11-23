#include  "lists.h"


/**
 * get_nodeint_at_index - gets data from a node at an index
 *
 * @head: pointer to the list
 *
 * @index: the index 
 *
 * Description: traverse eac node till you find the one we are looking for 
 *
 * Return: data or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;
	listint_t *ptr;
	int data;

	while (count != 0)
	{
		head = head-> next;
		count ++;
	}

	if (count != 0)
		return (NULL);

	data = head->n;
	return (head);
}
