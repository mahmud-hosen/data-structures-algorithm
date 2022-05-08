     // ------------------ Linear Search in C  ------------------

#include<stdio.h>
int main()
{
    int i, number, position=-1, item[20] = {3,6,1,9,5,2,4,8};
    printf("Enter Search Number:  ");
    scanf("%d",&number);

    for(i=0;i<=7;i++ )
    {
        if(item[i] == number)
        {
            position=i+1;
            break;
        }
    }

    if(position == -1)
    {
        printf("\n Searching number is not found.\n\n");
    }else
    {
        printf("\nSearching number is %d that is found.\nIt position is %d \n\n ",number,position-1);
    }

    return 0;
}

