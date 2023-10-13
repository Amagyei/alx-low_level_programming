#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_numbers - Entry point
 * Description : 'printing whether random number is negative positive or zer'
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i, j;
    for (i = 0; i < 11; i++){
        for (j = 0; j < 15; j++)
        {
            _putchar(j + '0');
        }
        _putchar('\n');
    }
	_putchar('\n');
}
