#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,r=0,s=0;
	clrscr();
	 printf("Enter a number:");
	 scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=s+d;
		r=r*10+d;
		n=n/10;
	}
	 printf("\nThe sum of digit is:%d",s);
	 printf("\n\nThe reverse of number is:%d",r);
	getch();
}