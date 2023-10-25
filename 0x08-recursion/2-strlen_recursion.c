#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * _strlen_recursion - print in reverse
 *
 * Description: ' Loopt through string and print revercse'
 *
 * @s: 'pointer to string to be printed'
 *
 * Return: void
 */



int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}


