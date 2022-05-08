#include<stdio.h>
int main()
{
	int n,temp;
	printf("How many you want to Index Number\n");
	scanf("%d",&n);
	printf("Enter Index value\n");
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0&&a[j-1]>a[j])
		{
			temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
			j--;

		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}