//Lab Task 1 Question no. 3
//find out the values of the odd indexes
#include<stdio.h>
int main()
{
    printf("Enter no. of elements: ");
    int n,i;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
                scanf("%d",&a[i]);

    printf("\nArray is: \n");

    for(i=0;i<n;i++){
    if(i%2!=0)
    printf("\tA[%d]=%d\n\n",i,a[i]);
    }

    return 0;

}
