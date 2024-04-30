//Insert an Element in an Array
#include<stdio.h>
int main()
{
   int n, i, l, m, evenCount=0;
    printf("Enter value of m: ");
    scanf("%d",&m);
    printf("Enter your array size: ");
    scanf("%d", &n);
    printf("Enter Array elements: ");
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        if (array[i] % 2 == 0){
            evenCount++;
            if (evenCount == m)
            l = array[i];}

    }
    printf("The index of the mth even value is %d", l);




}
