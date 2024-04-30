//sort elements of array in ascending order
#include <stdio.h>
int main()
{
    int i,arr[5],j;
    int temp=0;
    printf("Enter any 5 numbers:\n");
    for(i=1;i<=5;i++)
    scanf("%d",&arr[i]);

    for(i=1;i<=5;i++)
    printf("arr[%d]=%d\n",i,arr[i]);

    //Sort the array in ascending order
    for (i=1; i<=5; i++)
    {
        for (j=i+1; j<=5; j++)
        {
           if(arr[i] > arr[j])
            {
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }
    printf("\n");
    //Displaying elements of array after sorting
    printf("Elements of array sorted in ascending order: \n");
    for (i=1; i<=5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
