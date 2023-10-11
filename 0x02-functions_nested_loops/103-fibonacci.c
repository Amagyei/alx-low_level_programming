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
	long int even_term ;

	while(sum <= 4000000)
	{
		sum = a + b;
		if ((sum % 2) == 0)
		{
			even_term += sum;
		}
		a = b;
		b = sum;
	}
	printf("%ld\n" ,even_term);
	
	return 0;
}