//Print all unique elements of an array
#include <stdio.h>
int main()
{
    int a[100],n,ctr=0;
    int i,j,k;
       printf("\tPrint all unique elements of an array\n");
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
        }
    printf("\nThe unique elements found in the array are:\n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            /*Increment the counter when the search value is duplicate.*/
            if (i!=j)
            {
		       if(a[i]==a[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",a[i]);
        }
    }
       printf("\n\n");
    return 0;
}
