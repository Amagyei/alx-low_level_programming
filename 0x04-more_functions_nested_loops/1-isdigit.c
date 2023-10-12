#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - A program that checks for lowercase.
 * Description : 'printing whether random number is negative positive or zer'
 * @c: A parameter to check for lowercase
 * Return: Always 0
 */

int _isdigit(int c)
{
int a = isdigit(c);
if (a != 0)
{
a = 1;
}
else
a = 0;
return (a);
}
// int main(void)
// {
//     char c;

//     c = '0';
//     printf("%c: %d\n", c, _isdigit(c));
//     c = 'a';
//     printf("%c: %d\n", c, _isdigit(c));
//     return (0);
// }