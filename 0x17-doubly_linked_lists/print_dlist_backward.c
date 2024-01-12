#include "main.h"

/**
 * _print_dlistint_backward - Print all elements of a doubly linked list in reverse
 * @h: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t _print_dlistint_backward(const dlistint_t *h)
{
    size_t count = 0;

    /* Move to the last node*/
    while (h != NULL && h->next != NULL)
    {
        h = h->next;
    }

    /* Print elements backward*/
    while (h != NULL)
    {
        printf("%d", h->n);

        /* Print a space or another separator between values*/
        if (h->prev != NULL)
            printf(" ");

        h = h->prev;
        count++;
    }

    printf("\n");
    return count;
}

