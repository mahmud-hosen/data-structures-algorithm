#include<stdio.h>
int main()
{
	int a,b,result;
	printf("Enter 1st surface  : \n");
	scanf("%d",&a);
	printf("Enter 2nd height :\n");
	scanf("%d",&b);
	result=(a*a)+2*a*b+(b*b);
	printf("Sum two number : %d\n",result);

	return 0;
}