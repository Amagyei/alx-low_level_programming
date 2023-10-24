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
	int i, sum1, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i +  1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

