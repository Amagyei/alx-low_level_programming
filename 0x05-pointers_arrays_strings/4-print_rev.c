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
char a[] = &s
int n = strlen(a);
int i;

for (i = n; i >= 0; i--)
{
    putchar(a[i]);
}
}
