#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : 'Hopefully it all works'
 * Return: ALways 0 (Success)
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int sum = 0;
	int i = 0;

	for (i = 0; i < 50; i++){
		sum = a + b;
		if (i == 49)
		{
			printf("%ld\n" ,sum);
		}
		else
			printf("%ld, " ,sum);

		a = b;
		b = sum;
	}
	
	return 0;
}