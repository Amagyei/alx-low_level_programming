#include "main.h"
#include <stdio.h>

/** 
 * print_name - 'main function'
 *
 * Description: 'Function tha tprints a name i think'
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != null)
		f(name);
}
