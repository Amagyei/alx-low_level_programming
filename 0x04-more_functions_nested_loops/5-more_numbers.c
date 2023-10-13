#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * Description : 'printing whether random number is negative positive or zer'
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i, j;
    for (i = 0; i < 11; i++){
        for (j = 0; j < 15; j++)
        {
            if (j >= 10)
            {
                _putchar((j / 10) + '0');
            }
            _putchar((j % 10) + '0');
        }
        _putchar('\n');
    }
}
