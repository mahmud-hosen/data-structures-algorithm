#include<stdio.h>
#include<string.h>
    int c[10][10],m,n,i,j;
	char x[20],y[20],b[10][10];

int main()
{

	printf("1st seq\n");
	scanf("%s",x);
	printf("2st seq\n");
	scanf("%s",y);
	lcs();
	print(m,n);
}
lcs()
{
	m=strlen(x);
	n=strlen(y);
	for(i=0;i<=m;i++)
		c[i][0]=0;
	for(i=0;i<=n;i++)
		c[0][i]=0;
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(x[i]==y[j])
				{
					c[i][j]=c[i-1][j-1]+1;
					b[i][j]='c';
				}
				else if(c[i][j-1]<=c[i-1][j])
				{
					c[i][j]=c[i-1][j];
					b[i][j]='u';
				}
				else {
					c[i][j]=c[i][j-1];
					b[i][j]='l';

				}
			}
		}
}
    void print(int i,int j)
    {
    	if(i==0||j==0)
			return ;
		else
		{
			if(b[i][j]=='c')
			{
				printf("%c",x[i-1]);
				print(i-1,j-1);
			}
			else if(b[i][j]=='u')
			{
				print(i-1,j);
			}
			else
			{
				print(i,j-1);
			}

		}

    }