#include <stdlib.h>
#include <stdio.h>


/**
 * print_rev_recursion.c - print in reverse
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
		s++;
	}
	while (s != 0)
	{
		putchar(*s);
		s--;
	}

}


