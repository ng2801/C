#include <stdio.h>
void main()
{
	int year;
	clrscr();
	 printf("Enter a year: ");
	 scanf("%d", &year);

	if (year % 400 == 0)
	 printf("%d is leap year\n", year);
	else if(year%100==0)
	 printf("%d is not a leap year\n", year);
	else if(year%4==0)
	 printf("%d is leap year\n", year);
	else
	 printf("%d is NOT leap year\n", year);

	getch();
} 
