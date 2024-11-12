#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int isPrime(int x) {
    int i;
    for (i = 2; i < sqrt(x) + 1; i++) { // sqrt recalculated on each loop iteration
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    clock_t start, end;
    int limit = 100000; // Example limit for testing
    int primeCount = 0;

    start = clock();

    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            primeCount++;
        }
    }

    end = clock();
    printf("Non-Optimized Runtime: %f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    printf("Total primes found: %d\n", primeCount);

    return 0;
}
