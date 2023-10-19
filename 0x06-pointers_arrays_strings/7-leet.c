#include <stdio.h>

char *leet(char *str) {
    char *source = "aAeEoOtTlL";
    char *leet = "44370171";
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