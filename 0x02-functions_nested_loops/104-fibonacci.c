#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : 'Hopefully it all works'
 * starting from 00:00 to 23:59
 */
int main()
{
	long int a = 0;
	long int b = 1;
	long int sum = 0;
	int i = 0;

	for (i = 0; i < 99; i++){
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