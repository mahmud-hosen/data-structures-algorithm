#include<Stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isfull()
{
    if(top == MAXSIZE)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int isempty()
{
    if(top == -1)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int push(int data)
{
    if(!isfull())
    {
        top=top+1;
        stack[top]=data;
    }else
    {
        printf("Stack  is Full");
    }
}
// POP Function
int pop()
{
    int data;
    if(!isempty())
    {
        data = stack[top];
        top=top-1;
        return data;
    }else
    {
        printf("Stack is empty");
    }
}
int main()
{
    push(3);
    push(6);
    push(1);
    push(10);
    push(5);
    push(7);
    push(15);
    push(4);
    push(17);
     pop();
    push(13);

    printf("\nStack: ");
    for(int i=0;i<=top;i++)
    {
        printf(" %d ",stack[i]);
    }
    printf("\n");
    return 0;
}
