#include<stdio.h>
int main()
{
	int n,tk,i,note[20],e[20];
	printf("How much you want to note\n");
     scanf("%d",&n);
     printf("Enter TK\n");
     scanf("%d",&tk);
     printf("Enter note\n");
     for(i=1;i<=n;i++)
	 {
	 	scanf("%d",&note[i]);
	 }
	 for(i=1;i<=n;i++)
	 {
	 	e[i]=tk/note[i];
	 	tk=tk%note[i];
	 }

	 printf("\n");
	 for(i=1;i<=n;i++)
	 {
	    printf("Note :%d total :%d\n",note[i],e[i]);

	 }

	return 0;
}