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
	char letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);

}
