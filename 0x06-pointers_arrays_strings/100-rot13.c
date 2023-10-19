#include "main.h"
#include <stdio.h>
/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	int i = 0;
	for (i = 0; i < strlen(s); i++)
    {
        char a = *(s + i);
        char a += 13;
    }
	return (s);
}