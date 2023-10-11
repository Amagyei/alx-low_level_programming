#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description : 'printing whether random number is negative positive or zer'
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n > 98)
{
printf("%d, ", n);
n--;
}
else if (n < 98)
{
printf("%d, ", n);
n++;
}
}
printf("98\n");
}
