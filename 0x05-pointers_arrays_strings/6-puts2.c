#include "main.h"

/**
 * _strlen - check the code
 *
 * Descriptit on : 'check the code'
 *
 * @s: A parameter to check for lowercase
 * Return: Always 0.
 */

void puts2(char *str)
{
int n = strlen(str);
int i;

for (i = 0; i < n - 1; i + 2)
{
    _putchar(str[i]);
}

}
