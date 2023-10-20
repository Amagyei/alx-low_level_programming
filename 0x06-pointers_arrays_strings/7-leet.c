#include <stdio.h>

/**
 * leet - prints reverse array.
 * @str: size of array.

 * Return: reversed array.
 */

char *leet(char *str) {
    char *source = "aAeEoOtTlL";
    char *leet = "4433007711";
    int i, j;

    for (i = 0; str[i]; i++) {
        for (j = 0; source[j]; j++) {
            if (str[i] == source[j]) {
                str[i] = leet[j];
                break;
            }
        }
    }

    return str;
}