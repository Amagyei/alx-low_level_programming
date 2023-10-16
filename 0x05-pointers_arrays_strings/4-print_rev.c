#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strlen - check the code
 *
 * Description : 'check the code'
 *
 * @s: A parameter to check for lowercase
 * Return: Always 0.
 */

void print_rev(char *s)
{
int n = strlen(s);
int i;

for (i = n - 1; i >= 0; i--)
{
    putchar(s[i]);
}
putchar('\n');
}
