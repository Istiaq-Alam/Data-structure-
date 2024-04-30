//Lab 4 Task 2
#include <stdio.h>

int top = 0;
int stk[16];
int maxstk =16;


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
    int i,XY;
    printf("Enter your ID : ");
    scanf("%d", &XY);
    push(0);
    push(6);
    push(9);
    push(9);
    pop(9);
    push(22);
    push(300);
    push(0);
    push(0);
    pop(0);
    push(51);
    push(0);
    push(2);
    pop(2);
    push(10);
    push(512);
    pop(512);
    push(XY);

    printf("Top element is %d\n",stk[top]);

    printf("Element present in Stack:\n");
    for(i=1; i<=top; i++)
        printf("%d",stk[i]);

}







