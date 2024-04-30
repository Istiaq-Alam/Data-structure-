//Lab Task 1 Question no. 5
//find the average of all elements
#include<stdio.h>
int main()
{
    printf("Enter no. of elements: ");
    int n,i;

    scanf("%d",&n);
    float a[n],sum=0.0,avg;

    for(i=0; i<n; i++)
        scanf("%f",&a[i]);

    for(i=0; i<n; i++)
    {
        sum=a[i]+sum;
    }

    avg=sum/n;

    printf("\nAverage of %d elements is %f",n,avg);
    return 0;
}
