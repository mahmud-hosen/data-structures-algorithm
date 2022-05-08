#include<stdio.h>
void sort(int a[],int left,int right);
int a[10];
int main()
{
	int n;
	printf("Enter Index \n");
	scanf("%d",&n);
	printf("Index value \n");
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	sort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sort(int a[],int left,int right)
{
	int l,r,key;
	l=left;
	r=right;
	key=a[left];
			while(left<right)
	{
		while((a[right>=key])&&(left<right))
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
		sort(a,left,lt-1);
	if(right>lt)
		sort(a,lt+1,right);
}