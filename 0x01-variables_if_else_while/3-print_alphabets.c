#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description : 'Code to print tht alphabet'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
		if (letter == 'z')
			letter = 'A';
	}
	putchar('\n');
	return (0);
}

