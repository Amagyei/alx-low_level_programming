#include <stdio.h>

/**
 * main - the main function
 *
 * Description : 'the code is to print all the letters of the alphabet'
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
/* initializing the variable */
char letter = 'a';
while (letter <= 'z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}