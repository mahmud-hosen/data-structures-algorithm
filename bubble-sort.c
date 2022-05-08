#include<Stdio.h>
int main()
{
    int i,j,temp, list[10] ={10,6,4,3,2,1};
    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[j];
                list[j]=list[i];
                list[i]=temp;

            }
        }
    }
    printf("\n Assending Order:");
    for(i=0;i<=5;i++)
    {
        printf(" %d ",list[i]);
    }
    return 0;
}