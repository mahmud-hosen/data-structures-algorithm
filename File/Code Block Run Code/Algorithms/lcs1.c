#include<stdio.h>
#include<string.h>
int c[20][20],m,n,i,j;
char x[10],y[10],b[20][20];
int main()
{
	printf("Enter 2 seq \n");
	gets(x);
	gets(y);

	lcs();
	print(m,n);
}
void lcs()
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
			if(x[i-1]==y[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
			   b[i][j]='c';
			}
			else if(c[i-1][j]>c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]='u';
			}
			else
			{
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
	if(b[i][j]=='c')
	{
		print(i-1,j-1);
		printf("%c",x[i-1]);
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