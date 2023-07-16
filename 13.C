#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[20];
	int i, len, flag=0;
	clrscr();
	 printf("\nEnter the string : ");
	 scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	   {
		if(s[i]!=s[len-i-1])
		{

			flag=1;
			break;

		}
	   }
		if(flag ==1)
		{
			 printf("%s is not a palindrome",s);

		 }
		 else
		 {

			printf("%s is  a palindrome",s);
		 }
		 getch();
}
