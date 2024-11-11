#include <stdio.h>
#include <time.h>

#define N 5
#define SIZE 1000000000
unsigned long long result = 0;

int main() {
    clock_t start, end;
    start = clock();

    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        sum = i + 30; 
    }
    end = clock();

    printf("Runtime: %f seconds\n", ((double) (end - start)) / CLOCKS_PER_SEC); 


    return 0;
}