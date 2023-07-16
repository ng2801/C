#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,d,r=0;
	clrscr();
	 printf("Enter the number: ");
	 scanf("%ld", &n);
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	while(r>0)
	{
		n=r;
		while(n>0)
		{
			d=n%10;
			 printf("%d ",d);
			n=n/10;
		}
	r/=10;
	 printf("\n");
	}
	getch();
}
