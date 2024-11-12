#include <stdio.h>

int optimized(int a, int b, int c) {
    int result = 0;
    int product = a * b; // Compute once and reuse

    for (int i = 0; i < c; i++) {
        result += product;
    }

    return result;
}

int main() {
    int a = 5, b = 3, c = 10;
    printf("Result: %d\n", optimized(a, b, c));
    return 0;
}