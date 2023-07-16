#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1, *f2;
	int n,i,x;
	clrscr();
	 printf("Enter the no. of elements: ");
	 scanf("%d",&n);
	f1=fopen("ODD.DAT","w");
	f2=fopen("EVEN.DAT","w");
	 printf("Enter the values:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		 putw(x,f2);
		else
		 putw(x,f1);
	}
	fclose(f1);
	fclose(f2);
	 printf("Odd numbers are: \n");
	f1=fopen("ODD.DAT","r");
	while ((x=getw(f1))!=EOF)
	 printf("%d\t",x);
	fclose(f1);
	 printf("\nEven numbers are:\n");
	f2=fopen("EVEN.DAT","r");
	while ((x=getw(f2))!=EOF)
	 printf("%d\t",x);
	fclose(f2);
getch();
}