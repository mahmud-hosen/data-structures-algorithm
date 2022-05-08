#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter Index Number\n");
	scanf("%d",&n);
	float a[n],sum=0;
	printf("Enter Index value\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=0&&a[i]<=10)
			{
				if(a[j]>=0&&a[j]<=10)
				{
				sum=((a[i]+a[j])/2);
				printf("media = %.2f\n",sum);
				}
			}
			else{
				printf("nota invalida\n");
			}
		}
	}
	return 0;
}