#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		 printf(" ");
		for(k=0;k<i;k++)
		 printf("* ");
		 printf("\n");
	}
	getch();
}
