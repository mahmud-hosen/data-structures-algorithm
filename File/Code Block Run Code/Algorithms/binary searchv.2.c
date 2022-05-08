//Binary search
#include<stdio.h>
int main()
{
	int n,i;
	printf("How many you want to add number in array list\n ");
	scanf("%d",&n);
     int search,first=0,last=n,mid;
	int a[n];
	printf("Enter add number in array list\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

		printf("Enter search number\n ");
	scanf("%d",&search);


    do
	{
		mid=(int)((first+last)/2);
     printf("First %d\tLast %d\t Mid %d\tSearch %d Mid value  %d\t \n",first,last,mid,search,a[mid]);


		if(a[mid]==search)
		{
		printf("Found %d\n position %d",a[mid],mid+1);
		break;
		}
	else if(a[mid]>search)
	{

		last=mid-1;

	}
	else{
		first=mid+1;
	}

	}
	while(first<=last);


	if(first>last)
	{

		printf("Failed\n");
		 printf("First %d\tLast %d\t Mid %d\tSearch %d Mid value  %d\t ",first,last,mid,search,a[mid]);

	}

	return 0;
}