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
char a[447];
int i;
int j = 0;

    for (i = n -1; i >= 0; i--){
        a[j] = s[i];
        j++;
    }
strcpy(s, a);
}

