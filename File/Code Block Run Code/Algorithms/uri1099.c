#include<stdio.h>
 int main()

 {
 	int n,i,x,y,z,c=0;
 	scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  	scanf("%d %d",&x,&y);

  	if(x==y)
	{
		printf("%d\n",c);
	}
	else if(x<y){
			int c=0;
			for(z=x+1;z<y;z++)
			{
				if(z%2==1||z%2==-1)

					c=c+z;

			}
	printf("%d\n",c);
	}
	else {
			int c=0;
			for(z=y+1;z<x;z++)
			{
				if(z%2==1||z%2==-1)

					c=c+z;

			}
	printf("%d\n",c);
	}
  }


 	return 0;
 }