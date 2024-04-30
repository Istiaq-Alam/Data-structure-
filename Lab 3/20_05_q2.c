//Lab Task 3 Question No. 2
//Apply binary search on any type of unsorted 1D array.
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


    for (i = 1 ; i <= n ; i++)
    {
        for (j = 1 ; j <= n - i ; j++)
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

    printf("Find the index of element= ");
    scanf("%d",&KEY);

    LB = 1;
    UB = n ;
    MID = (LB+UB)/2;

    while (LB <= UB)
    {
        if (array[MID] < KEY)
            LB = MID + 1;
        else if (array[MID] == KEY)
        {
            printf("The element %d is in %d index.\n", KEY, MID);
            break;
        }
        else
            UB = MID - 1;

        MID = (LB + UB)/2;
    }
    if (LB > UB)
        printf("Not found! %d isn't present in the Book list.\n", KEY);

    return 0;
}
