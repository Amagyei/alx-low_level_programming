git p#include "function_pointers.h"
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

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
