#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
int main()
{
	int a = 0;
	int sum = 0;

	while (a < 1024)
	{
		if(a % 3 || a % 5)
		{
			sum+=a;
		}
		a++;
	}
	return sum
}