#include "main.h"
/**
 * main - entry point
 *
 * Description : 'Code to print tht alphabet'
 *
 * Return: Always 0 (success)
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
