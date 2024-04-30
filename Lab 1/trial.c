// C program to find union of
// two sorted arrays
#include <stdio.h>

int main()
{
	int m,n,i;
	printf("Enter no. of elements of A: ");
	scanf("%d",&n);
	int arr1[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr1[i]);

	printf("Enter no. of elements of B: ");
	scanf("%d",&m);
	int arr2[m];
	for(i=0;i<m;i++)
	scanf("%d",&arr2[i]);

	printUnion(arr1, arr2, m, n);
	getchar();
	return 0;
}

void printUnion(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			printf(" %d ", arr1[i++]);
		else if (arr2[j] < arr1[i])
			printf(" %d ", arr2[j++]);
		else {
			printf(" %d ", arr2[j++]);
			i++;
		}
	}
	while (i < m)
		printf(" %d ", arr1[i++]);
	while (j < n)
		printf(" %d ", arr2[j++]);
}
