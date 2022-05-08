#include<Stdio.h>
int main()
{
    int first=0,second=1,n,count=0,fibo;
    printf("Enter Range: ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }else
        {
            fibo=first+second;
            first=second;
            second=fibo;

        }
        count++;
        printf(" %d ",fibo);
    }
    return 0;
}
