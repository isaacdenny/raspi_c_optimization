#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

int main() {
    clock_t start, end;

    start = clock();

    double *arr1 = malloc(SIZE * sizeof(double));
    double *arr2 = malloc(SIZE * sizeof(double));
    double result = 0;

    // Initialize arrays
    for (int i = 0; i < SIZE; i++) {
        arr1[i] = (double)i;
        arr2[i] = (double)(SIZE - i);
    }

    // Perform optimized calculations (with SEE)
    for (int i = 0; i < SIZE; i++) {
        double term1 = arr1[i] * arr1[i];
        double term2 = arr2[i] * arr2[i];
        double term3 = arr1[i] * arr2[i];
        
        // Reuse the precomputed terms instead of recalculating
        result += term1 - term2 + term3;
        result += term1 - term2 + term3;
    }

    end = clock();

    printf("Runtime: %f seconds\n", ((double) (end - start)) / CLOCKS_PER_SEC);

    printf("Result: %f\n", result);

    free(arr1);
    free(arr2);
    return 0;
}

