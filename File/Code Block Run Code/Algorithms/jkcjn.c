#include<stdio.h>
int main()
{
	int n,i,len=-1;
	printf("Enter Index Number\n");
	scanf("%d",&n);
	printf("Enter Index value\n");

	int a[n],key;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key value\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{

		if(a[i]==key)
		{
			len=i+1;
			break;
		}

	}
	if(len==-1) printf(" Not Found \n");
	else printf("Found pos : %d\n",len);
	return 0;
}