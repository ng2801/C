#include <stdio.h>
#include <string.h>
void main()
{
	char s[100];
	int len, i;
	clrscr();
	 printf("Enter a sentence: ");
	 scanf("%[^\n]s", s);
	len = strlen(s);
	 printf("short form is:%c ", s[0]);
	for (i = 1; i <= len; i++)
	{
		if (s[i] == ' ')
		 printf("%c ", s[i + 1]);
	}
	getch();
}