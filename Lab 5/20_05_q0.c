#include<stdio.h>

int main(){
    char str[20];

    printf("Enter any String: ");
    scanf("%[^\n]s",&str);

    int length = strlen(str);

    for(int i=0; i<length; i++){
        if(str[i]>='0'&&str[i]<='9')
        printf("%c ",str[i]);
    }

}
