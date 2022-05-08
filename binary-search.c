#include<Stdio.h>
int main()
{
    int list[10] = {2,4,6,9,12,15,16,20};
    int start=0,end=7,key = 6;

    do
    {
        int mid =(int)((start+end)/2);
        if(list[mid] == key)
        {
            printf("searching value: %d  | Location: %d \n",list[mid],mid+1);
            break;
        }
        else if(list[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    while(start<=end);

    if(start>end)
    {
        printf("searching value is not found./n");
    }
    return 0;
}
