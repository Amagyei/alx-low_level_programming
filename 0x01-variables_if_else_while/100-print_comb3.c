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

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (!(a > b || a == b))
			{
				putchar(a);
				putchar(b);
				if (a == 8 && b == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = 0;
		a++;
	}
	return (0);

}
