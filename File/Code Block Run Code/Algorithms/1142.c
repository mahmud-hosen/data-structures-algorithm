#include<stdio.h>
int main()
{
	int n,i,j,k,l=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=4*i;
		for(j=l;j<=k-1;j++)
		{
			printf("%d ",j);
		}
		printf("pum\n");
		l=k+1;
	}
	return 0;
}