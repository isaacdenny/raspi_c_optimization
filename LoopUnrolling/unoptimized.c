#include<math.h>
// helper function: checks to see if a number is prime
int isPrime(int x) {
    int i;
    int max = sqrt(x) + 1;

    // no prime number is less than 2
    for (i = 2; i < max; i++) {
        // if the number is divisible by i
        if (x % i == 0) {
            return 0; // it's not prime
        }
    }
    return 1; // otherwise it is
}

int main() {
    for (int i=0; i < 4096; i++){
        isPrime(i);
    }
    return 0;
}