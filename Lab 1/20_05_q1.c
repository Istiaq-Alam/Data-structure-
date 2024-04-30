//Lab Task 1 Question no. 1
//print array numbers
#include<stdio.h>
int main()
{
    printf("Enter no. of elements: ");
    int n,i;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
                scanf("%d",&a[i]);

        printf("\nArray is:\n");

    for(i=0;i<n;i++)
    printf("\ta[%d]=%d\n",i,a[i]);

    return 0;


}

