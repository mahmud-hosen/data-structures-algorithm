#include<stdio.h>
int main()
{
	int n,i,search,pos=-1;
	printf("How many you want to add number in array list\n ");
	scanf("%d",&n);
	printf("Enter search number\n ");
	scanf("%d",&search);
	int a[n];
	printf("Enter add number in array list\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

		for(i=0;i<n;i++)
	{
		printf("%d\t\n",a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			pos=i+1;
			break;
		}
	}

	if(pos==-1)
	{
		printf("Search number %d invalid\n",search);
	}
	else{

		printf("search number %d valid and position %d \n",search,pos);
	}


	return 0;
}