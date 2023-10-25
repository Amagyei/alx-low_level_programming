#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * _pow_recursion - print in reverse
 *
 * Description: ' Loopt through string and print revercse'
 *
 * @x: 'pointer to string to be printed'
 *
 * @y: 'pointer to string to be printed'
 *
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


