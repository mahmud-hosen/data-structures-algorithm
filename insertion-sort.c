#include<Stdio.h>
int main()
{
    int i,j,temp,list[10] = {9,7,4,3,1};

    for(int i=0;i<=4;i++)
    {
        j=i;
        while(j>0 && list[j] < list[j-1])
        {
            temp = list[j];
            list[j] = list[j-1];
            list[j-1] = temp;
            j--;
        }
    }

    printf("\n Ascending order:");
    for(int i=0;i<=4;i++)
    {
        printf(" %d ",list[i]);
    }
    printf("\n");
    return 0;
}
