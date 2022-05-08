#include<stdio.h>
int main()
{

	int n;
	printf("How many you want Index Number \n");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("Enter Index Number\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0&&a[j]<a[j-1])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;
		}

	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}