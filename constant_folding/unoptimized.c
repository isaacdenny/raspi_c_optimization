#include <stdio.h>
#include <time.h>

#define N 5
#define SIZE 1000000

int main() {
    clock_t start, end;

    start = clock();

    for (int i = 0; i < SIZE; i++) {
        int debug = N - 5;  // Calculation written as-is, without direct optimization
    }
    end = clock();
    return 0;
}