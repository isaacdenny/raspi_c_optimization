#include <stdio.h>

int unoptimized(int a, int b, int c) {
    int result = 0;

    for (int i = 0; i < c; i++) {
        result += a * b;
    }

    return result;
}

int main() {
    int a = 5, b = 3, c = 10;
    printf("Result: %d\n", unoptimized(a, b, c));
    return 0;
}
