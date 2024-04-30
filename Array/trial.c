//Insert & Delete
#include <stdio.h>

int main()
{
    int n,i,c,item;
    printf("\tEnter your array size:");
    scanf("%d",&n);

    int array[n];
    for(i=0;i<n;i++)
    {scanf("%d",&array[i]);}

    printf("\tArray     Index\n");

    for(i=0;i<n;i++){
    printf("\t  %d \t   %d\n",array[i],i);}
    //printf("\n\tIndex  ");
    //for(i=0;i<n;i++){
    //printf("%d ",i);}

    printf("\nEnter your Choice:\n1. Insert an element.\n2. Delete an element.\n: ");
    scanf("%d",&c);

    if(c!=1 && c!=2){
    printf("Invalid Choice");
    }

    else if(c=1){
    printf("Enter the element to be inserted in the array: ");
    scanf("%d",&item);

    printf("Enter the location where the element %d is to be inserted: ",item);
    }




}














