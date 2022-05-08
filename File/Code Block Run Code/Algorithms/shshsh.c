#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Index \n");
	scanf("%d",&n);
	printf("Enter value\n");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	merge(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

}
void merge(int a[],int i,int j)
{

	if(i<j)
	{
		int mid;
		mid=(i+j)/2;
		merge(a,i,mid);
		merge(a,mid+1,j);
		mergesort(a,mid,mid+1,j);
	}
}
void mergesort(int a[],int i1,int j1,int i2,int j2)
{
	int temp[20],k=0,i,j;
	i=i1;
	j=i2;
	while(i<=j1&&j<=j2)
	{
		if(a[i]<a[j])
		{

			temp[k++]=a[i++];
		}
		else
		{

			temp[k++]=a[j++];
		}
	}
	while(i<=j1)
	temp[k++]=a[i++];
	while(j<=j2)
		temp[k++]=a[j++];
		j=0;
	for(i=i1;i<=j2;i++)
	{
		a[i]=temp[j];
		j++;
	}
}




