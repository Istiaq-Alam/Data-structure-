/*print array number
#include<stdio.h>
int main()
{
    int a[4],i;
    printf("Enter 5 numbers\n");

    for(i=1;i<=5;i++)
    scanf("%d",&a[i]);

    for(i=1;i<=5;i++)
    printf("a[%d]=%d\n",i,a[i]);

    return 0;


}*/
#include<stdio.h>
int main()
{
    int n,div=0;
    int fib[10]={0,1,1,2,3,5,8,13,21,34};
    printf("Enter Your number: ");
    scanf("%d",&n);

    while(fib<=n)
    {

        if(n % fib == 0)// Check if n is divisible by the current Fibonacci number
        {
            div++;
        }


        fib++;
    }

    printf("Fibonacci Numbers are 1,2,3,5,8,13,21,34...\n");
    printf("So Number of Fibonacci divisors of %d : %d",n,div);

    return 0;

}

