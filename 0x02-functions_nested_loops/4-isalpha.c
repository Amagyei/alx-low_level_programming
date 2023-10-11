#include "main.h"
#include <ctype.h>

/**
 * Description : 'Hopefully it all works'
 * _isalpha - A program that checks for lowercase.
 *
 * @c: A parameter to check for lowercase
 * Return: Always 0
 */

int _isalpha(int c)
{
int a = isalpha(c);
if (a != 0)
a = 1;
return (a);
}
