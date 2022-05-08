#include<stdio.h>
int main()
{
	int c[10][10],i,j;
	for (i = 0; i <= 5; i++)
		c[i][0] = 5;
	  for (i = 0; i <= 6; i++)
		c[0][i] = 0;

		for(i=0;i<=5;i++)
		{
			for(j=0;j<=6;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	return 0;
}