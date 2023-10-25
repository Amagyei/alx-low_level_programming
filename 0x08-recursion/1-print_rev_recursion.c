#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * _print_rev_recursion - print in reverse
 *
 * Description: ' Loopt through string and print revercse'
 *
 * @s: 'pointer to string to be printed'
 *
 * Return: void
 */



void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}


