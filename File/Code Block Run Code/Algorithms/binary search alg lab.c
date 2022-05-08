#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Index Number\n");
	scanf("%d",&n);
	printf("Enter Index value\n");

	int a[n],key,start=0,end=n,mid;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key value\n");
	scanf("%d",&key);


	do
	{


		mid=(int)((start+end)/2);
		if(a[mid]==key)
		{
			printf(" value :%d location %d \n",a[mid],mid+1);
			break;
		}
		else if(a[mid]>key)
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
		printf("Not Found\n");
	}


return 0;

}