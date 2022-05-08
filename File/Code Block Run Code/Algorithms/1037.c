#include<stdio.h>
int main()
{
	int n,i;
	double e,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		scanf("%lf %lf",&x,&y);
		if(y==0)
		{
			printf("divisao impossivel\n");
		}
		else{

	     e=(x/y*1.00);
	     printf("%.1lf",e);
		}
	}


	return 0;
}