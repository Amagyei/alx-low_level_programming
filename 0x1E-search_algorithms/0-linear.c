#include "search_algos.h"


/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if the value
 *         is not present in the array or if the array is NULL
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (array[i] != value)
	{
		i++;
		if (i == size)
		{
			return (-1);
		}
	}
	return (i);
}
