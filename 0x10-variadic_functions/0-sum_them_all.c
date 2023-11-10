#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/* 
 * sum_them_all - function that sums all its arguments
 *
 * Description: ' Uses variardic arguments to ta take variable number of arguments to sum up'
 *
 * Return: ' sum of the variables'
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list ptr; //ptr to the arguments

	va_start(ptr, n); // initialising the argument to the list pointer

	for(i = 0; i < n; i++)
		sum += va_arg(ptr, int);// traverse list and sum arguments

	va_end(ptr); // end list traversal

	return sum;
}
