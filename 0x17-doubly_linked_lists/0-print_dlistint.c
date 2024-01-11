#include "main.h"

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;


	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		printf("\n");
		count++;
	}

	return(count);
}
