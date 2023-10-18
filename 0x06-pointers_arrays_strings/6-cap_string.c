#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */

char *cap_string(char *a)
{
    
    int i;
    for (i = 0; i < ((int)strlen(a)); i++ )
    {
        if (i == 0)
        {
            a[i] = toupper(a[i]);
        }
        else if (a[i--] == ' ' || a[i--] == '\n' || a[i--] == '.' )
        {
            while (!(isalpha(a[i])))
            {
                i++;
            }
            
        }
    }
    return (a);
}
