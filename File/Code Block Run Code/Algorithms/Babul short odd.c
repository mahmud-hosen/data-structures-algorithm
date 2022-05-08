#include<stdio.h>
int main()
{
	int a[10],i,j,num,temp;
	printf("Enter Num \n");
	scanf("%d",&num);
	printf("Enter Elements of this Number");
	for(i=0;i<num;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++)
	{
		if(a[i]%2==0)
		{
			for(j=i+1;j<num;j++)
			{
				if(a[j]%2==0)
				{
					if(a[i]<a[j])
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
		}
	}
	for(i=0;i<num;i++)
	{
	printf("%d\n",a[i]);
	}
	return 0;
}