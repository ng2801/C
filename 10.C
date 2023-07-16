#include <stdio.h>
#include<conio.h>
void main()
{
	int currency[10] = {2000,500,200,100,50,20,10,5,2,1},amount,i,note;
	clrscr();
	 printf("Enter the amount: ");
	 scanf("%d", &amount);
	for (i = 0; i < 10; i++)
	{
		note = amount / currency[i];
		if (note != 0)
		 printf("\nThe number of %d note is %d",currency[i],note);

		amount = amount % currency[i];
	 }
	 getch();
} 