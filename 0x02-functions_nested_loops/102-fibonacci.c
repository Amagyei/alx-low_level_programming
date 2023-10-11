#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
int main()
{
	int a = 0;
	int b = 1;
	int sum = 0;
	int i = 0;

	for (i = 0; i <= 50; i++){
		sum = a + b;
		printf("%d, " ,sum);
		a = b;
		b = sum;
	}
	
	return 0;
}