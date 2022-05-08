#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Index \n");
	scanf("%d",&n);
	printf("Enter value\n");
	int a[n],start=0,end=n,mid,key;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Ker value\n");
	scanf("%d",&key);
	do
	{
		mid=(start+end)/2;
		if(a[mid]==key)
		{
			printf("pos :%d",mid);
			break;
		}
		else if (a[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}


	}
	while(start<=end);
	if(start>end)
	{
		printf("False\n");
	}


}
