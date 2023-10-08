#include <stdio.h>

/**
 * main - the main function
 *
 * Description : 'the code is supposed to print all the letters of the alphabet'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	/* initializing the variable */
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);

}
