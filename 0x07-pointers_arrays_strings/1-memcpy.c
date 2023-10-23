#include <string.h>
/**
 * _memcpy - assign bytes of length b to string s
 * Description : 'same thins '
 * @src : the string
 * @dest: length of bytes
 * @n :no of bytes
 * Return: first somethiing
 */

char *_memcpy(char *dest, char src, unsigned int n)
{
	memcpy(dest, src, n);
	return (*dest);
}

