//Lab Task 1 Question no. 2
//Find out the even values of an array
#include<stdio.h>
int main()
{
    printf("Enter no. of elements: ");
    int n,i;

    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("\nArray is: \n");

    for(i=0;i<n;i++){
    if(a[i]%2==0)
    printf("\tA[%d]=%d\n",i,a[i]);
    }
    return 0;

}
