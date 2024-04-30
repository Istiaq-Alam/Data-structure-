#include<stdio.h>

int top=0;
int stack[20];
int maxstack=20;


int push(int item)
    {
    if(top==maxstack)
    {
        printf("Stack overflow\n");
    }
    else
      {
          top = top+1;
          stack[top]=item;
          //printf("%d pushed into stack\n",item);
          return stack[top];
      }
    }

int pop()
    {
    if(top==0)
    {
        printf("Stack underflow\n");
    }
    else
      {
          int item = stack[top];
          top = top-1;
          //printf("%d Popped from stack\n",item);
          return item;
      }
    }

int main()
{
    char p[17];
    scanf("%s",&p);
    int A,B,C,R;
    int i=0;
    while(p[i]!=')')
    {
     if(isdigit(p[i]))
        {
         int q = (int)(p[i]-'0');
        //printf("q:%d",q);
         push(q);
        }
     else if(p[i]=='+')
        {
         A=pop();
         B=pop();
         C=B+A;
         push(C);
        }
     else if(p[i]=='-')
        {
         A=pop();
         B=pop();
         C=B-A;
         push(C);
        }
     else if(p[i]=='*')
        {
         A=pop();
         B=pop();
         C=B*A;
         push(C);
        }
     else if(p[i]=='/')
        {
         A=pop();
         B=pop();
         C=B/A;
         push(C);
        }

     i++;
    }
    R=pop();
    printf("Result:%d",R);
}
