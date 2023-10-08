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

	do {
		putchar(letter);
		if (letter == 'z')
			letter = 'A';
		else
			letter++;
	} while
		(letter != 'Z');
	putchar('Z');
	putchar('\n');
	return (0);
}

