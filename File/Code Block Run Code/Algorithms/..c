#include<stdio.h>
int main()
{
	int array[100],i,n,temp,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(array[i]>array[j]){
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	}
	for(i=0;i<n;i++){
		printf("%d",array[i]);
	}
	return 0;

}