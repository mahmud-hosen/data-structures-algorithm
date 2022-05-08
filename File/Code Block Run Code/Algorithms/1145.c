#include<stdio.h>
int main()
{
	int i,j,x,y,k;
	scanf("%d %d",&k,&y);

		for(i=1;i<=y;i=i+3)
			x=k;
		{
			for(j=i;j<=x;j++)
			{
				printf("%d ",j);
			}
			k=x+3;
		}

	return 0;
}