#include "main.h"
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	int count = 1;

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
