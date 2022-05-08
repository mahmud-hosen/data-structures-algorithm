#include<stdio.h>
#include<string.h>
int c[10][10],m,n,i,j,l=0;
char x[50],y[50];b[10][10];

int main()
{

	printf("Enter 1st sequence\n");
	scanf("%s",x);
	printf("Enter 2nd sequence\n");
	scanf("%s",y);
	lcs();
	print(m,n);
	printf("Length : %d",l);
	return 0;
}
void print(int i,int j)
{
	if(i==0||i==0)
		return ;
		if(b[i][j]=='c')
		{
			print(i-1,j-1);
			printf("%c",x[i-1]);
			l++;
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
				else if(c[i-1][j]>=c[i][j-1])
				{
					c[i][j]=c[i-1][j];
					b[i][j]='u';
				}
				else{
					c[i][j]=c[i][j-1];
					b[i][i]='l';
				}
			}
		}



	}