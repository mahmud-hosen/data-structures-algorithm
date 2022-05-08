#include<stdio.h>
int main()

{

	int n,i,len=-1,key;

	printf("Enter index number");
	scanf("%d",&n);
    int a[n];
	printf("Enter index value");
	for(i=0;i<n;i++)
	{

	scanf("%d",&a[i]);
	}


	printf("Enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{

			len=i+1;
			break;
		}
	}
	if(len==-1)
	{

		printf("Not Found");
	}
	else{
		printf("Found %d",len);
	}
	return 0;
}