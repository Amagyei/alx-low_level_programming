#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * Description : 'check the code'
 *
 * @a: A parameter to check for lowercase
 * @b: A parameter to check for lowercase
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
