//Lab 2 task 1
// Insert an element
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
    printf("Enter the element to be inserted in the array: ");
        scanf("%d", &item);
        printf("Enter the location where the element %d is to be inserted: ", item);
        scanf("%d", &l);
        if (l <= n)
        {
            int j;
            for (j = n; j >= l; j--)
            {
                array[j + 1] = array[j];
            }
            array[l] = item;
            n = n + 1;
        }
        else
            printf("The entered location is out of bound.");
        printf("\nModified Array: ");
        for (i = 1; i <=n; i++)
            printf("%d ", array[i]);
        printf("\n");
}
