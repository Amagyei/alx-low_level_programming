#include <stdio.h>

/*
 * main - the main function
 *
 * Description : the code is supposed to print all the letters of the alphabet
 *
 * Return : 0 (Success)
 *
 */

int main(void) {
	char letter = 'a';

	while (letter <= 'z'){
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return 0;
}
