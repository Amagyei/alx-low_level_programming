#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _islower - A program that checks for lowercase.
 * Description : 'printing whether random number is negative positive or zer'
 * @c: A parameter to check for lowercase
 * Return: Always 0
 */

int _isupper(int c)
{
int a = isupper(c);
if (a != 0)
{
a = 1;
}
else
a = 0;
return (a);
}
