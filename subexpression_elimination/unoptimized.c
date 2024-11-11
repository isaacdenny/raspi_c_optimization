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

    // Perform redundant calculations (without SEE)
    for (int i = 0; i < SIZE; i++) {
        result += arr1[i] * arr1[i] - arr2[i] * arr2[i] + arr1[i] * arr2[i];
        result += arr1[i] * arr1[i] - arr2[i] * arr2[i] + arr1[i] * arr2[i];  // Redundant
    }

    end = clock();
    printf("Runtime: %f seconds\n", ((double) (end - start)) / CLOCKS_PER_SEC); 

    printf("Result: %f\n", result);

    free(arr1);
    free(arr2);
    return 0;
}

