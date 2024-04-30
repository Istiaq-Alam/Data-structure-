//Lab Task 7 Question No 1b
// Function to calculate factorial using for loop

#include <stdio.h>
int main() {
    int N;
    unsigned long long factorial = 1; // Use an unsigned long long to handle large factorials

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %llu\n", N, factorial);
    }

    return 0;
}
