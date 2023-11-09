#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - 'main function'
 * @array: 'name variable'
 *
 * @cmp: 'pointer to the function'
 *
 * @size: 'size'
 *
 * Description: 'Function tha tprints a name i think'
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if(size <= 0)
		return -1;

	if(array != NULL && size != NULL && cmp != NULL)
		for(i = 0; i < size; i++)
		{
			int a = cmp(array[i]);
			if(a == 0)
				return -1;

			return a;
		}
}
