#include<stdio.h>
int main()
{

	int n=4,temp,i,j,a[4]={100,40,10,1 };

	for(i=0;i<=3;i++)
	{

		while(i>0&&a[i]<a[i-1])
		{
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
			i--;
		}
	}
	printf("In asending Order");
	for(i=0;i<=3;i++)
	{
		printf(" %d\t",a[i]);
	}

	return 0;
}