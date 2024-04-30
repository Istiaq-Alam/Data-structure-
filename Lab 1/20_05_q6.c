//Lab Task 1 Question no. 6
//intersection values of 2 arrays.
#include<stdio.h>
int main()
{
    printf("Enter no. of elements of A: ");
    int n,i,m,j;
    scanf("%d",&n);

    int A[n];
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);

    printf("Enter no. of elements of B: ");
    scanf("%d",&m);

    int B[m];
    for(i=0; i<m; i++)
        scanf("%d",&B[i]);

    printf("Intersection : ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(A[i]==B[j])
            printf("%d ",A[i]);
        }
    }

    return 0;
}







