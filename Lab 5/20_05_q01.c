#include<stdio.h>
#include<ctype.h>
int main()
{
    printf("Enter any String:");
    char in_str[100];
    scanf("%s",&in_str);
    int j = strlen(in_str);

    for(int i=0; i<j; i++)
    {
        if(isdigit(in_str[i]))
            printf("%c ",in_str[i]);
    }

}
