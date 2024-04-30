#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100]; // Assuming the input string won't exceed 100 characters
    int numbers[100]; // Assuming the number of numbers won't exceed 100
    int numCount = 0;
    int sum = 0;

    printf("Enter a series of numbers separated by spaces: ");
    fgets(input, sizeof(input), stdin);

    // Tokenize the input string and convert to numbers
    char *token = strtok(input, " ");
    while (token != NULL) {
        int number = atoi(token);
        numbers[numCount] = number;
        numCount++;
        token = strtok(NULL, " ");
        printf("Number: %d\n",number);
    }

    // Calculate the summation
    for (int i = 0; i < numCount; i++) {
        sum += numbers[i];
    }

    printf("Sum of the numbers is: %d\n", sum);

    return 0;
}
