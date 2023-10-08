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
	const char *ch = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; ch[i] != '\0'; i++) {
		putchar(ch[i]);
	}

	putchar('\n');

	return 0;
}
