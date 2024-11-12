#include <math.h>
#include <stdio.h>
// helper function: checks to see if a number is prime
int isPrime(int x) {
    int i;
    int max = sqrt(x)+1;

    // no prime number is less than 2
    for (i = 2; i < max; i+=2) {
        // if the number is divisible by i or i+1
        if ( (x % i == 0) || (x % (i+1) == 0) ) {
            return 0; // it's not prime
        }
    }
    return 1; // otherwise it is
}

int main() {
    for (int i=0; i < 10000000; i++){
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}