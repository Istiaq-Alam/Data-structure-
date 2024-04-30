#include<stdio.h>

int main(){
    char ch;
    int m;

    printf("Enter any character:");
    scanf("%c",&ch);
    //int len = strlen(ch);

    //for(int i=0; i<len; i++){

    if(ch<='9' && ch>='0')
    m = ch-'0';
    printf("%d",m);

    return 0;
}

/*int main(){
char arr[100];
scanf("%s",&arr);
int convertnum = atoi(arr);
printf("converted number is %d", convertnum);
}*/
