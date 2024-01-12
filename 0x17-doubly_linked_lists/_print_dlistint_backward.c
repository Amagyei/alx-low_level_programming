#include "lists.h"

size_t _print_dlistint_backward(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL && h->next != NULL)
    {
        h = h->next;
    }

    while (h != NULL)
    {
        printf("%d", h->n);
        printf("\n");

        h = h->prev;
        count++;
    }

    return count;
}

