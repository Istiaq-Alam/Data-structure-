//Tree Post Order
#include<stdio.h>
int n=15;
char T[]={'\0','D','B','F','A','C','G','\0','\0','\0','\0','\0','\0','\0','H'};
void PostOrder(int i)
{
    if(i>0 && T[i]!='\0')
       { PostOrder(Lc(i));
        PostOrder(Rc(i));
        printf("%c",T[i]);}
}

int Lc(int i)
{
    if(T[i]!='\0'&&(2*i)<=n)
        return (2*i);

    return -1;
}

int Rc(int i)
{
    if(T[i]!='\0'&&((2*i)+1)<=n)
        return ((2*i)+1);

    return -1;
}

int main()
{
    int a;

    printf("Please enter the root index:");
    scanf("%d",&a);
    PostOrder(a);
    return 0;

}
