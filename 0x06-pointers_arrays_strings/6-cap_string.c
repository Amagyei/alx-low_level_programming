#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */

char *cap_string(char *s)
{
    
    int i;
    /* this almost worked if not for two letters between multiple spaces */
    /** for (i = 0; i < ((int)strlen(s)); i++ )
    * {
    *     while(( *(s + i) == ' ' )|| (*(s + i) == '\n') || (*(s + i) == '.'))
    *     {
    *         i++;
    *        *(s + (i)) = toupper(*(s + (i)));
    *    }}
        
    */
    for (i = 0; i <((int)strlen(s)); i++) {
        if ((i == 0 || !isalpha(s[i - 1])) && islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return (s);
}
