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
	int letter = 48;

	while (letter <= 102)
	{
		putchar(letter);
		letter++;

		if (letter == 58)
			letter = 97;
	}

	putchar('\n');

	return (0);

}
