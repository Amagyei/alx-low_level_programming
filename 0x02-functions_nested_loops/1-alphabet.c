#include "main.h"
/**
 * print_alphabet - function that print alphabets in lower case
 *
 * Return: always 0;
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');

}
