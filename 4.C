#include<stdio.h>
#include<conio.h>
void main()
{
	 char s[100];
	 int i,j=1;
	 clrscr();
	  printf("Enter a sentance: ");
	  scanf("%[^\n]s", s);
	 for (i=0;s[i]!='\0';i++)
	 {
		if (s[i]==' ')
		j++;
	 }
	  printf("Number of words: %d\n",j);
	 getch();
}