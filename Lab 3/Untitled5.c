#include <stdio.h>
int main()
{
    int i, j, t, LB, UB, MID, n, KEY;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter Array elements: ");
    for (i = 1; i <= n; i++)
        scanf("%d", &array[i]);

    for (i = 1 ; i < n ; i++)
    {
        for (j = 1 ; j < n - i  ; j++)
        {
            if (array[j] > array[j+1])
            {
                /* Swapping */
                t         = array[j];
                array[j]   = array[j+1];
                array[j+1] = t;
            }
        }
    }
    printf("Modified Sorted array:\n");
    for (i = 1; i <= n; i++)
    {
        printf("Array[%d]= %d\n", i, array[i]);
    }
}
