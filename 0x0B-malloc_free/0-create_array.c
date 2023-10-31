#include <stdlib.h>
#include <stdio.h>



char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return NULL;

	char *array = (char *)malloc(size * sizeof(char));

	return array;
}
