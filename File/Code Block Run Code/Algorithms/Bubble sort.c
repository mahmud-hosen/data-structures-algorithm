#include<stdio.h>
int main()
{

	int i,j,temp,a[5]={50,40,30,20,10};
	for(i=0;i<=4;i++)
	{


		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Assending Order\n");
	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
	return  0;
}