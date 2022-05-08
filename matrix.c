#include<stdio.h>
int main()
{
	int a[6][6],i,j,c=0,d=0;
	printf("Enter the matrix value x and y\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{

			scanf("%d",&a[i][j]);
		}
	}


	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{

			if(a[i][j]==1)
			{
				c++;
			}
			else if(a[i][j]==0)
			{
				d++;
			}

		}

	}
	printf("%d %d",c,d);


	return 0;
}