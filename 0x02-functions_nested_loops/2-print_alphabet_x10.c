#include "main.h"
/**
 * print_alphabet - function that print alphabets in lower case
 *
 * Description : function iterates a loop that prints a to z
 *
 * Return: always 0;
 */

void print_alphabet_x10(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
        _putchar(a);
	}
    _putchar('\n');
}
}
