#include<stdio.h>
int f=0;
int r=0;
int Q[20];
int ms=20;
int n=20,t;

int main()
{
    int var, x;
    scanf("%d",&var);
    x=enqueue(var);
    printf("%d is inserted in Queue",x);

    return 0;
}

void dqueue()
{
    if(f==0)
        {printf("Underflow");
    int t=Q[f];}
    else if(f==r)
    {
        f=0;
        r=0;
    }

    else if(f==n)
    {
        f=1;
    }
    else
        f=f+1;
    printf("%d is deleted",t);
}
