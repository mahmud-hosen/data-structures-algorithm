#include<stdio.h>
int main()
{
	int n;
	printf("How many number you want to add in index\n ");
	scanf("%d",&n);
	int a[n],i,j,temp;
	printf("Enter Index value \n");
	for(i=0;i<n;i++)
	{

        scanf("%d",&a[i]);
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
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);

	}
	return 0;
}