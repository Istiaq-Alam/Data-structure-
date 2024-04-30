//print reverse array numbers
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("\tEnter 5 numbers\n");

    for(i=1;i<=5;i++)
                scanf("\t%d",&a[i]);

        printf("\tOutput\n");

    for(i=5;i>=1;i--)
    printf("\ta[%d]=%d\n",i,a[i]);

    return 0;


}

