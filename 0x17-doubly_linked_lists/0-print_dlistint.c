#include "main.h"

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;


	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");

		if (h->next != NULL)
			printf(" ");

		h = h->next;
		count++;
	}

	return(count);
}
