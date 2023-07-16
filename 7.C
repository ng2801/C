#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,i;
	float sum=0.0,j;
	clrscr();
	 printf("Enter a number: ");
	 scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=1.0/i;
		sum=sum+pow(j,i);
	}
	 printf("%.4f",sum);
	getch();
}
