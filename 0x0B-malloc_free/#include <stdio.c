#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;  // Return NULL if the input string is NULL.
    }

    // Allocate memory for the duplicate string and check for allocation success.
    char *duplicate = (char *)malloc(strlen(str) + 1);

    if (duplicate != NULL) {
        // Copy the input string to the allocated memory.
        strcpy(duplicate, str);
    }

    return duplicate;  // Return the pointer to the duplicated string.
}