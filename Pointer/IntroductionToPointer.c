#include<stdio.h>
int main()
{
    int x, y, z;
    x = 5;
    y = 7;
    z = 9;

    int* px;
    px = &x;

    int** pxx;
    pxx = &px;

    printf("X = %d \n ", &x);

    printf("px = %d \n ", *px);
    printf("pxx = %d \n ", **pxx);
    return ;
}
