#include<stdio.h>
int main()
{
	int n;
	printf("How many you want Index Number \n");
	scanf("%d",&n);
	int a[n],k,i;
	printf("Enter Index Number\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter search Item\n");
	scanf("%d",&k);
	int start=0,end=n,mid=0;
    do{

		mid=(int)(start+end)/2;
		printf("start :%d End : %d Mid %d Mid value %d  \n",start,end,mid,a[mid]);
		if(a[mid]==k)
		{
			printf("Location %d Value %d",mid+1,a[mid]);
			break;
		}

		else if(a[mid]<k)start=mid+1;
		else end=mid-1;


    }
    while(start<=end);
    if(start>end)
	{
		printf("No Found\n");
	   printf("start :%d End : %d Mid %d Mid value %d  \n",start,end,mid,a[mid]);
	}


	return 0;
}