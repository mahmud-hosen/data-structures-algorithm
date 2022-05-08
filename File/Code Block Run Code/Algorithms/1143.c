#include<stdio.h>
int main()
{
	int i,n,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=i*i;
		y=i*i*i;
		printf("%d %d %d\n",i,x,y);
		printf("%d %d %d\n",i,x+1,y+1);
	}
	return 0;
}