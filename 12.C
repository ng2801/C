#include <stdio.h>
#include<conio.h>
int fact(int n)
{
	int factorial = 1;
	if (n > 0)
	factorial = n * fact(n - 1);

	return factorial;
}
void main()
{
	int n, fac;
	clrscr();
	 printf("Enter number: ");
	 scanf("%d", &n);
	fac = fact(n);
	 printf("Factorial = %d\n", fac);
	getch();
} 
