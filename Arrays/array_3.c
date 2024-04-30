//Summation of array numbers
#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("Enter 5 numbers\n");

    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);

    for(i=0;i<5;i++)
        sum=sum+a[i];

    printf("The summation is: %d",sum);

    return 0;


}
