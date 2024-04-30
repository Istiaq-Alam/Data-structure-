//Lab 4 Task 2
#include <stdio.h>
int top = 0;
int stk[3];
int maxstk =3;

int push(int item)
{
    if(top==maxstk)
    {
        printf("Stack Overflow.\n");
        return 0;
    }
    else
    {
        top=top+1;
        stk[top] = item;
        printf("%d pushed in to Stack.\n", item);
    }
}
int pop(int item)
{
    if(top==0)
    {
        printf("Stack under flow.");
    }
    else
    {
        top=top-1;
        printf("%d popped from Stack.\n",item);

    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    pop(30);
    int i;
    printf("Top element is %d\n",stk[top]);

    printf("Element present in Stack:\n");
    for(i=top; i>=1; i--)
        printf("%d ",stk[i]);

}







