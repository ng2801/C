#include <stdio.h>
#include<conio.h>
void main()
{
    int n,r,sum,temp,s,e;
    clrscr();

    printf("Input starting number: ");
    scanf("%d",&s);

    printf("Input ending number: ");
    scanf("%d",&e);

    printf("\nArmstrong numbers in given range are: ");
    for(n=s;n<=e;n++)
    {
	 temp=n;
	 sum = 0;

	 while(temp!=0)
	 {
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
	 }
	 if(sum==n)
	     printf("%d ",n);
    }
getch();
}
