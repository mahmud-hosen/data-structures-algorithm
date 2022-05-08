#include<stdio.h>
int main()
{
	int a,n,sum=0,i;
	scanf("%d",&a);
	while(1)
	{
		scanf("%d",&n);
		if(n<=0)continue;
		else break;
	}
	for(i=0;i<n;i++)
	{
		sum=((sum+i)+a);
	}
	printf("%d\n",sum);
	return 0;
}