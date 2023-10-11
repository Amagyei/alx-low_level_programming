#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void times_table(lim)
{
	int i, j, k;

	i = 0;

	while (i < lim)
	{
		j = 0;

		while (j < lim)
		{
        k = j * i;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < lim && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');

				_putchar(k + '0');
			} else if (k >= lim)
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