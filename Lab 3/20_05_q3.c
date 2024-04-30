//Lab task 3 Question No. 3
//Find 3rd largest value in an array and insert a value
#include<stdio.h>
int main()
{
    int n, i, t,j,item;
    printf("Enter your array size: ");
    scanf("%d", &n);
    printf("Enter Array elements: ");
    int array[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }

    int cp[n];
    for (i=1; i<=n; i++)
    {
        cp[i] = array[i];
    }

    for (i = 1 ; i < n ; i++)
    {
        for (j = 1 ; j < n - i ; j++)
        {
            if (cp[j] > cp[j+1])
            {
                /* Swapping */
                t         = cp[j];
                cp[j]   = cp[j+1];
                cp[j+1] = t;
            }
        }
    }
    /*printf("Sorted array: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", cp[i]);
    }*/
    printf("The 3rd largest value is %d\n", cp[n-2]);
    int index = cp[n-2],l;

    for (int i = 1; i <= n; i++)
    {
        if (array[i] == index)
            l = i;
    }
    printf("Enter the Value to be Inserted :");
    scanf("%d",&item);

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
    printf("\nModified Array: ");
        for (i = 1; i <=n; i++)
            printf("%d ", array[i]);
        printf("\n");


}




