/*#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("Enter any String:");
    char in_str[100];
    scanf("%s",&in_str);
    int j = strlen(in_str);

    for(int i=0; i<j; i++)
    {
        if(isdigit(in_str[i])){
            printf("%d",in_str[i]-'0');

            }
    }

}*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    int length = strlen(input);
    int result = 0;
    int currentNumber = 0;
    int multiplier = 1;

    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(input[i])) {
            currentNumber = (input[i] - '0') * multiplier + currentNumber;
            multiplier *= 10;
        } else {
            result += currentNumber;
            currentNumber = 0;
            //multiplier = 1;
        }
    }

    result += currentNumber;

    printf("Output: ");
    int first = 1;
    for (int i = 0; i < length; i++) {
        if (isdigit(input[i])) {
            if (!first) {
                printf("+");
            }
            printf("%c", input[i]);
            first = 0;

            while (i + 1 < length && isdigit(input[i + 1])) {
                i++;
                printf("%c", input[i]);
            }
        }
    }
    printf("=%d\n", result);

    return 0;
}
