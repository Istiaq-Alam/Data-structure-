//Lab Task 1 Question no. 7
//Union values of 2 arrays.

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


    i=0;
    j=0;
	while (i < m && j < n) {
		if (A[i] < B[j])
			printf(" %d ", A[i++]);
		else if (B[j] < A[i])
			printf(" %d ", B[j++]);
		else {
			printf(" %d ", B[j++]);
			i++;
		}

    while (i < m)
		printf(" %d ", A[i++]);
	while (j < n)
		printf(" %d ", B[j++]);

    return 0;
    }
}
