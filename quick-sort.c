#include<Stdio.h>
int main()
{
    int number[10] = {15,13,8,5,3};
    quicksort(number,0,4);

    printf(" \n Assending Order: ");
    for(int i=0;i<=4;i++)
    {
        printf(" %d ",number[i]);
    }
    printf("\n");

    return 0;
}
void quicksort(int number[10],int left,int right)
{
    int pivot,i,j,temp;
    if(left<right)
    {
        pivot=left, i=left, j=right;
        while(i<j)
        {
            while(number[pivot] >= number[i] && i<right)
            {
                i++;
            }
            while(number[pivot] < number[j])
             {
                 j--;
             }
            if(i<j){
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			 }
        }

          temp=number[pivot];
		  number[pivot]=number[j];
		  number[j]=temp;

		  quicksort(number,left,j-1);
		  quicksort(number,j+1,right);
    }
}
