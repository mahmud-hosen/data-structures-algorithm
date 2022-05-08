#include<stdio.h>
int main()
{
	int n,temp;

	printf("Index Number\n");
	scanf("%d",&n);
	printf("Enter Index Value\n");
	int a[n],i,j,key,s=0,e=n,mid;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Key \n");
	scanf("%d",&key);
	do
	{



			mid=(int)(s+e)/2;
			if(a[mid]==key)
			{
				printf("%d   %d \n",mid+1,a[mid]);
				break;
			}
			else if(a[mid]<key)
			{
				s=mid+1;
			}
			else
			{

				e=mid-1;
			}

	}
		while(s<=e);
		if (e<s)
		{
			printf("Not found\n");
	   }
	   return 0;

}
