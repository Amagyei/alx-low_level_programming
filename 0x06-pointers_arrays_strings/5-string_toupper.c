#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper - prints reverse array.
 * @a: array to be compared.
 * Return: reversed array.
 * Description : 'check the code'
 */

char *string_toupper(char *a)
{
int i;
for (i = 0; i < ((int)strlen(a)); i++)
{
if (islower(a[i]))
{
a[i] = toupper(a[i]);
}
}
return (a);
}
