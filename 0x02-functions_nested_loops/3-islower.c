#include "main.h"
#include <ctype.h>

/**
 *
 * _islower - A program that checks for lowercase.
 * Description : ' hello'
 *  @c: A parameter to check for lowercase
 * Return: Always 0
 */

int _islower(int c)
{
int a = islower(c);
if (a != 0)
    a = 1;
return (a);
}
