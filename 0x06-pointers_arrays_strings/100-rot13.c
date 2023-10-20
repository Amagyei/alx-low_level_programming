#include "main.h"
#include <stdio.h>
#include <string.h> // Include this header for the strlen function

/**
 * rot13 - change letters to ROT13.
 * @s: analyzed string.
 *
 * Return: String with all letters in ROT13 encoding.
 */
char *rot13(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        char a = s[i];

        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
            // Check if the character is an uppercase or lowercase letter
            char base = (a >= 'A' && a <= 'Z') ? 'A' : 'a';
            a = ((a - base + 13) % 26) + base;
        }
        s[i] = a; // Update the character in the input string
    }
    return s;
}
