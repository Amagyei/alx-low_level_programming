#include "palindrome.h"

int is_palindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int largest_palindrome_product() {
    int max_palindrome = 0;

    for (int i = 100; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j) {
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    return max_palindrome;
}

