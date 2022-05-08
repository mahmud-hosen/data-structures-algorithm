#include<stdio.h>
int main()
{

	int i,j,n,temp;
	printf("How much you want add number in array \n");
	sacnf("%d",&n);
	int a[n];
	printf("Enter Index Value\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("Assending oeder\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}

	return 0;
}