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

void rev_string(char *s)
{
int n = strlen(s);
    char a[n + 1];

    for (int i = 0; i < n; i++) {
        a[i] = s[n - 1 - i];
    }
    a[n] = '\0';

    strcpy(s, a);
}
