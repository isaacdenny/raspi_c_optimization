#include <stdio.h>
#include <time.h>

#define N 5
#define SIZE 1000000

int main() {
    clock_t start, end;

    start = clock();

    for (int i = 0; i < SIZE; i++) {
        int debug = 0;  // Constant folding applied: N - 5 evaluated to 0
    }
    end = clock();

    return 0;
}