//Adj Matrix
#include<stdio.h>
int main()
{
    int i,j,p,q,n,e;
    printf ("Enter the value of vertex : ");
    scanf("%d",&n);
    printf ("Enter the value of edge : ");
    scanf("%d",&e);
    int a[n+1][n+1];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            a[i][j]=0;
            printf ("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Edges:\n");
    for(int k=1; k<=e; k++)
    {
        scanf("%d %d",&p,&q);
        a[p][q]=1;
        a[q][p]=1;
    }
    for(i=1; i<=n; i++)
    {
       printf("%d:  ",i);
        for (j=1; j<=n; j++)
        {
            printf ("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*#include<stdio.h>
main()
{
int i,j,p,q,n,e;
printf ("Enter the value of vertex : ");
scanf("%d",&n);
printf ("Enter the value of edge : ");
scanf("%d",&e);
int a[n+1][n+1];
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
a[i][j]=0;
}
}
for(int k=1; k<=e; k++)
{
scanf("%d %d",&p,&q);
a[p][q]=1;
a[q][p]=1;
}
for(i=1; i<=n; i++)
{
printf("%d:",i);
for (j=1; j<=n; j++)
{
printf ("%d ",a[i][j]);
}
printf("\n");
}

}*/
