#include<stdio.h>



void change(int x)
{
    x = 30;
    printf("Changle x is : %d \n", x);
}

int main()
{
    int x;
    x =10;
    change(x);

    printf("Main function X is : %d \n", x);
    return 0;
}
