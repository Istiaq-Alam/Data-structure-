//Lab 2 task 2
// delete element
#include <stdio.h>

int main()
{
    int n, i, l, item;
    printf("Enter your array size:");
    scanf("%d", &n);
    printf("Enter Array elements:");

    int array[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the location from where element is to be deleted: ");
        scanf("%d", &l);

        if (l <= n)
        {
            int j;
            item = array[l];
            printf("\nItem %d deleted from location %d\n", item, l);
            for (j = l ; j < n ; j++)
            {
                array[j] = array[j + 1];
            }
            n = n - 1;
        }

        else
        {
            printf("\nThe Entered location is out of bound.");
        }

        printf("Modified array: \n");
        for (i = 1; i <= n; i++)
        {
            printf("A[%d] = %d \n",i, array[i]);
        }
        printf("\n");
}
