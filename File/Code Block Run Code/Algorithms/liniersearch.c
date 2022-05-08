#include<stdio.h>
int main()
{
	int n,loc=-1;
	printf("How many naumber you want to Index \n");
	scanf("%d",&n);
	int a[n],i,k;
    printf("Enter Index Number\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Search Number\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{

		if(a[i]==k)
		{
          loc=i+1;
          break;

		}



	}
	if(loc==-1)printf("Not Found\n");
	else printf("Loc : %d value %d",loc,a[loc-1]);
	return 0;
}