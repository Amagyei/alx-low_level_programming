#include "main.h"
#include <string.h>

/**
 * _strncat - writes the character c to stdout
 * Description : 'check the code'
 * @dest: The character to print
 * @src: The character to print
 * @n: lorem ipsum dolor
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
