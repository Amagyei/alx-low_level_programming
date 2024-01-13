#include <stdio.h>
#include "palindrome.h"

int main() {
    int result = largest_palindrome_product();

    FILE *file = fopen("102-result", "w");
    if (file != NULL) {
        fprintf(file, "%d", result);
        fclose(file);
        printf("Result written to file: %d\n", result);  // Debugging statement
    } else {
        printf("Error opening file for writing\n");  // Debugging statement
    }

    return 0;
}

