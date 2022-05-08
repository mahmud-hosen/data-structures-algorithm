#include<stdio.h>
int main()
{
	int n,i;

	printf("Enter Index Number");
	scanf("%d",&n);
	int a[n];
	int start=0,end=n,key,mid;
	printf("Enter Index value");

	for(i=0;i<n;i++)
	{

		scanf("%d",&a[i]);
	}
	printf("Enter Key value");
	scanf("%d",&key);


	do{

		mid=(int)((start+end)/2);

		printf("Start: %d\t End :%d\t Mid :%d\tKey:%d\t a[%d]\n",start,end,mid,key,a[mid]);
		if(a[mid]==key)
		{

			printf("Found & position %d & value :%d",mid+1,a[mid]);
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


			printf("failed\n");
		   printf("Start: %d\t End :%d\t Mid :%d\tKey:%d\t a[%d]",start,end,mid,key,a[mid]);



	}
	return 0;
}