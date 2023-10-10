#include "main.h"
/**
 * print_alphabet_x10 - program that print alphabet lowercase
 *
 * Return: Always 0
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
