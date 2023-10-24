#include <string.h>
#include <stdio.h>

/**
 * print_diagsums - assign bytes of length b to string s
 * Description : 'same thins '
 * @a :no of bytes
 * @size :no of bytes
 * Return: first somethiing
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum1 = a[(size * i) + 1];
			sum2 = a[(size * i) - (i +  1)];
		}
	}
	printf("%d, %d", sum1 sum2);
}

