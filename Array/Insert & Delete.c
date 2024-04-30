// Insert & Delete
#include <stdio.h>

int main()
{
    int n, c, i, l, item;
    printf("Enter your array size:");
    scanf("%d", &n);
    printf("Enter Array elements:");

    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\tIndex     Array\n");
    for (i = 0; i < n; i++)
    {
        printf("\t  %d \t   %d\n", i + 1, array[i]);
    }

    printf("\n\tEnter your Choice:\n\t1. Insert an element.\n\t2. Delete an element.\n:=: ");
    scanf("%d", &c);

    if (c == 1)
    {
        printf("Enter the element to be inserted in the array: ");
        scanf("%d", &item);

        printf("Enter the location where the element %d is to be inserted: ", item);
        scanf("%d", &l);

        if (l <= n)
        {
            int j;
            for (j = n; j >= l - 1; j--)
            {
                array[j + 1] = array[j];
            }
            array[l - 1] = item;
            n = n + 1;
        }

        else
            printf("The entered location is out of bound.");

        printf("\nModified Array: ");
        for (i = 0; i < n; i++)
            printf("%d ", array[i]);
        printf("\n");
    }

    else if (c == 2)
    {
        printf("\nEnter the location from where element is to be deleted: ");
        scanf("%d", &l);

        if (l <= n)
        {
            int j;
            item = array[l - 1];
            printf("\nItem %d deleted from location %d\n", item, l);
            for (j = l - 1; j < n - 1; j++)
            {
                array[j] = array[j + 1];
            }
            n = n - 1;
        }

        else
        {
            printf("\nThe Entered location is out of bound.");
        }

        printf("Modified array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid Choice!!");
    }
}
