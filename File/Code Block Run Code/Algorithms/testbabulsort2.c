#include<stdio.h>
int main()
{
	int n;
	printf("How much you want to add number in index\n");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("Enter index value\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
printf("Assending Order \n");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	return 0;
}