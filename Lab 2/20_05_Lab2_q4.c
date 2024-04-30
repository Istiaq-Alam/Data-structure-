//Lab 2 task 4
// delete element of mth even value
#include<stdio.h>
int main()
{
   int n, i, l, m, evenCount=0, item;
    printf("Enter value of m: ");
    scanf("%d",&m);
    printf("Enter your array size: ");
    scanf("%d", &n);
    printf("Enter Array elements: ");
    int array[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 1; i <= n; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;
            if (evenCount == m){
               l =i;
               break;}
        }
    }

        if (l <= n)
        {
            int j;
            item = array[l];
            for (j = l ; j < n ; j++)
            {
                array[j] = array[j + 1];
            }
            n = n - 1;
            printf("The index of the mth even value is %d\n", item);
        }


        if(l==0)
        {
            printf("\nThere is no even value in this array\n");
        }

        printf("Modified Array is: \n");
        for (i = 1; i <= n; i++)
        {
            printf("A[%d] = %d \n", i, array[i]);
        }
        printf("\n");
}
