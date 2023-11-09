#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - 'main function'
 * @name: 'name variable'
 *
 * @f: 'pointer to the function'
 *
 * Description: 'Function tha tprints a name i think'
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	for(i = 0; i < size; i++0)
	{
		action(array[i]);
	}	
}
