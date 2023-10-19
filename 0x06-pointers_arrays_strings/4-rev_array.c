#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 * Description : 'check the code'
 */
void reverse_array(int *a, int n)
{
	int i = 0;
    int j = n - 1;

    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
}
