#include<stdio.h>
a[10];
int main()
{
	int n,i;
	printf("Enter Index \n");
	scanf("%d",&n);
	printf("Enter value\n");
	int a[n],key;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

}
void quick(int a[],int left,int right)
{
	int l,r,key;
	l=left;
	r=right;
	key=a[left];
	while(left<right)
	{
		while((a[right]>=key)&&(left<right))
			right--;
		if(left!=right)
		{
			a[left]=a[right];
			left++;
		}
		while((a[left]<=key)&&(left<right))
			left++;
		if(left!=right)
		{
			a[right]=a[left];
			right--;
		}
	}
	a[left]=key;
	int lt=left;
	left=l;
	right=r;
	if(left<lt)
		quick(a,left,lt-1);
	if(right>lt)
		quick(a,lt+1,right);


}
