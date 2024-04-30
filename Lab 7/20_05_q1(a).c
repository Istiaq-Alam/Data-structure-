//Lab Task 7 Question No 1a
// Function to calculate factorial using recursion

#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(n);
        printf("Factorial of %d is %llu\n", n, fact);
    }

    return 0;
}
