#include<stdio.h>
int main()
{

	int j=0,x;
	float n,sum=0,a[j];
	while(1){
	    while(1)

	   {
		scanf("%f",&n);
		if(n>=0&&n<=10)
		{
			a[j]=n;
			j++;
			if(j>1)break;

		}
		else
		{
			printf("nota invalida\n");
		}
	}
	sum=(a[0]+a[1])/2.0;
	printf("media = %.2f\n",sum);
	j=0;
 while(1)
 {
 	scanf("%d",&x);
 	printf("novo calculo (1-sim 2-nao)\n");
 	if(x==1||x==2)break;
 }
 if(x==1)continue;
 else break;
	}

	return 0;

}