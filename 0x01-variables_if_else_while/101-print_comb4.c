#include <stdio.h>

/**
 * main - the main function
 *
 * Description : 'the code is to print all the letters of the alphabet'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	/* initializing the variable */
	int a = '0';
	int b = '0';
	int c = '0';

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
	return (0);

}
