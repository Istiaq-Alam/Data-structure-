//Lab Task 1 Question no. 4
//find the sum of all elements
#include<stdio.h>
int main()
{
    printf("Enter no. of elements: ");
    int n,i;

    scanf("%d",&n);
    float a[n],sum=0.0;

    for(i=0; i<n; i++)
        scanf("%f",&a[i]);

    for(i=0; i<n; i++)
    {
        sum=a[i]+sum;
    }
    printf("\nSum of %d elements is %f",n,sum);
    return 0;


}
