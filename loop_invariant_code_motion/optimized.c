#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int isPrime(int x) {
    int i;
    int max = sqrt(x) + 1; // Move the calculation outside the loop
    for (i = 2; i < max; i++) {
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
    printf("Optimized Runtime: %f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    printf("Total primes found: %d\n", primeCount);

    return 0;
}
