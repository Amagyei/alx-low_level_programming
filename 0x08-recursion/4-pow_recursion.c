#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * factorial - print in reverse
 *
 * Description: ' Loopt through string and print revercse'
 *
 * @n: 'pointer to string to be printed'
 *
 * Return: void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y >= 1)
	{
		y--;
		_pow_recursion(x * x, y);
	}
	return (x);
}


