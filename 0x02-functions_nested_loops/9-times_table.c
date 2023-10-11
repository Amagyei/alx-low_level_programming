#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void times_table(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			int a = i * j;

            if (a >= 10 )
            {
                int tens = (a / 10);
                int ones = (a % 10);

                _putchar('0' + tens);
                _putchar('0' + ones);
                _putchar(',');
                _putchar(' ');

            }
            else
            {
            _putchar('0' + a % 10);
            _putchar(',');
            _putchar(' ');
            _putchar(' ');
            }
            
            j++;
		}
        _putchar('\n');
		i++;
	}

    _putchar(3);
}