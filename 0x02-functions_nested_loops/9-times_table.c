#include "main.h"
/**
 * times_table - prints every minute of the day of Jack Bauer
 * Description : 'Hopefully it all works'
 * Return: ALways 0 (Success)
 */
void times_table(void)
{
int i, j, k;
i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = j *i;
	if (j == 0)
	{
		_putchar(k + '0');
	}
if (k < 10 && j != 0)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(k + '0');
}
else if (k >= 10)
{
	_putchar(',');
	_putchar(' ');
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
}
j++;
}
_putchar('\n');
i++;
}
}
