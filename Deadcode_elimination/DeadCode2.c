#include <stdio.h>
#include <time.h>

long long calculate_numbers() {
    long long sum = 0;

    for (long long i = 1; i <= 10000000000; i++) {
        // Essential calculation only
        sum += i * i * i;
    }

    return sum;
}

int main() {
    clock_t start = clock();
    
    long long result = calculate_numbers();
    
    clock_t end = clock();
    double runtime = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Result: %lld\n", result);
    printf("Runtime: %f seconds\n", runtime);
    
    return 0;
}
