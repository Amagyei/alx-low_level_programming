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
     int n = strlen(s);
    char *a = malloc(n + 1);  // Allocate memory for the reversed string.

    if (a != NULL) {
        for (int i = 0; i < n; i++) {
            a[i] = s[n - 1 - i];
        }
        a[n] = '\0';

        strcpy(s, a);
        free(a); 
    } else {
        
    }
}
}
