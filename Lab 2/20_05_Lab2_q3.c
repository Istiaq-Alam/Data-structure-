// Lab 2 task 3
// sort element
#include <stdio.h>

int main()
{
    int n, i, j;
    float t;
    printf("Number of Students : ");
    scanf("%d", &n);
    printf("Heights : ");

    float array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    for (i = 0 ; i < n - 1; i++)
    {
        for (j = 0 ; j < n - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                t          = array[j];
                array[j]   = array[j+1];
                array[j+1] = t;
            }
        }
    }

    printf("Sorted height: ");
    for (i = 0; i < n; i++)
    {
        printf("\nStudents[%d] = %.2f \t",i, array[i]);
    }
}
