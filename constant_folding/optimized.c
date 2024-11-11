#include <stdio.h>

#define N 5

int main() {
    int debug = 0;  // Constant folding applied: N - 5 evaluated to 0
    return 0;
}