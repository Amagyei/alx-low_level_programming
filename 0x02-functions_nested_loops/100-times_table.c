#include "main.h"
/**
 * print_times_table - prints every minute of the day of Jack Bauer
 * Description : 'Hopefully it all works'
 * Return: ALways 0 (Success)
 */
void print_times_table(int numlim)
{
	int i, j, k;

	i = 0;

	while (i < numlim)
	{
		j = 0;

		while (j <= numlim)
		{
        k = j * i;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < numlim && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');

				_putchar(k + '0');
			} else if (k >= numlim)
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