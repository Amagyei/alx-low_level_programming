#include <stdlib.h>
#include <stdio.h>
/*#include "main.h"*/

/**
 * _puts_recursion - prints characters of a string
 *
 * Description: 'Loops through the string to print each character'
 *
 * @s: pinter to string variable
 *
 * Return: voide
 */


void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else 
		putchar('\n');
}
