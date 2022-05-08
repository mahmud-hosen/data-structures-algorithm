#include<stdio.h>
int main()
{
     int i,j,a=1,b;

	for(i=0;i<=2;i=i+0.2)
	{
		b=1;
		for(j=a;b<=3;j++)
		{

			printf("I=%d J=%d\n",i,j);
			b++;
		}

		a=a+0.2;
	}
	return 0;
}