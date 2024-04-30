//Lab 5 task 1
//Find out the numeric digit from any string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void numb_digits(const char *input_string) {
    int length = strlen(input_string);

    for (int i = 0; i < length; i++) {
        if (isdigit(input_string[i])) {
            printf("%c ", input_string[i]);
        }
    }
    printf("\n");
}
int main() {
    char user_input[100];
    printf("Enter a string: ");
    fgets(user_input, sizeof(user_input), stdin);
    if (user_input[strlen(user_input) - 1] == '\n') {
        user_input[strlen(user_input) - 1] = '\0';
    }
    numb_digits(user_input);
    return 0;
}

