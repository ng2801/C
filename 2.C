#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c,n,i;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf(" %d",c);
	}
	printf("\n");
	getch();
}