#include<stdio.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char str[20];

    printf("Enter any String: ");
    scanf("%[^\n]s",&str);

    int length = strlen(str);
    int i = 0;
    while(str[i]!=')')
    {
        if(str[i]>='0'&&str[i]<='9'){
            int m =str[i]-'0';
            printf("%d ", m);
            int r = Push(m);
            }

    i++;
    }

}
