#include <stdio.h>
#include<conio.h>
void main()
{
	 int n, i, temp = 0;
	 clrscr();
	  printf("Enter a number: ");
	  scanf("%d", &n);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			temp++;
		}
	}
	if (n==1)
	 printf("1 is niether prime nor composite");
	else if (temp != 0)
	 printf("%d is a not prime\n", n);
	else
	 printf("%d is a prime\n", n);
	getch();
}