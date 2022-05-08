#include<stdio.h>
int main()
{

	int a[13]={12,20,30,32,38,42,50,60,65,70,85,90,100};
	int i,start=0,end=12,mid,key=32;

	do{
		mid=(int)((start+end)/2);

	printf("Start: %d \tEnd :%d\t Mid %d :\t Key: %d \t a[%d]: \n",start,end,mid,key,a[mid]);
		if(a[mid]==key)
		{
			printf("Index location %d\n",mid+1);
			break;
		}
		else if(a[mid]>key)
		{
			end=mid-1;
		}
		else{
			start=mid+1;
		}

	}

     while(start<=end);
     if(start>end)
	 {

	 	printf("Faild\n");

	printf("Start: %d \tEnd :%d\t Mid %d :\t Key: %d \t a[mid]: \n",start,end,mid,key,a[mid]);
	 }

	return 0;
}