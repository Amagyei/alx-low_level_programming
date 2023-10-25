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
	if (n != 1)
	{	
		n = n * (n - 1);
		factorial(n);
	}
	return (n);
}


