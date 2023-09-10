#include <stddef.h>

int stray(size_t n, int arr[n]) {
    int x = 0;

    for (size_t i = 0; i < n; i++) {
        x ^= arr[i]; // Using XOR to find the unique number
    }

    return x;
}