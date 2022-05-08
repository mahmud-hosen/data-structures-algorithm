#include<stdio.h>
int main()
{
	int i,temp,j,n,a[n];
	printf("How many you want to babul short  \n ");
	scanf("%d",&n);
	printf("Enter Number\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=1;i<=n;i++)
	{
		if(a[i]%2==0)
		{


		for(j=i+1;j<=n;j++)

		{
            if(a[j]%2==0)
            {


		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		}
	}
	}
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}


	return 0;
}