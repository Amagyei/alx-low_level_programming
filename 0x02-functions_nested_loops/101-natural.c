#include "main.h"
#include <stdio.h>
/**
 * main - prints every minute of the day of Jack Bauer
 * Description : 'Hopefully it all works'
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if((a % 3) == 0 || (a % 5) == 0)
		{
			sum += a;
		}
		a++;
	}

	printf("%d\n", sum);
	return (0);
}