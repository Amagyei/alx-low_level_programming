#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */

char *cap_string(char *)
{
    int i;
    for (i = 0; i < ((int)strlen(a)); i ++)
    {
        if (!(isupper(a[i])))
        {
            a[i] = toupper(a[i]);
        }
    }
    return (a);
}
