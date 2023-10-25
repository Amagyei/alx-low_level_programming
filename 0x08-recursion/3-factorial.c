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



int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
	{
		return (n);
	}
	return (n * factorial(n - 1));
}


