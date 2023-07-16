#include <stdio.h>
#include<conio.h>
void main()
{
	int a[10][10], i, j, row, col;
	clrscr();
	 printf("Enter the row: ");
	 scanf("%d", &row);
	 printf("Enter the column: ");
	 scanf("%d", &col);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i < j)
			{
				a[i][j] = 1;
			}
			else if (i > j)
			{
				a[i][j] = -1;
			}
			else
			{
				a[i][j] = 0;
			}
		}
	}
  printf("\nThe matrix: \n");
 for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	getch();
}