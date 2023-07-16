#include<stdio.h>
#include<conio.h>
void main()
{
    int  arr[10][10],m,n,i,j;
    clrscr();
     printf("Enter the number of rows and columns of a matrix: \n");
     scanf("%d%d",&m,&n);
     printf("\nEnter the elements of the matrix: \n");
    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	{
	    scanf("%d",&arr[i][j]);
	}
    }
     printf("\nThe given matrix is : \n");
    for( i=0;i<m;i++)
    {
	for( j=0;j<n;j++)
	{
	    printf("%d\t",arr[i][j]);
	}
	 printf("\n");
    }
	 printf("\n Transpose of the matrix is \t \n");
	for(i=0;i<n;i++)
    {
	for(j=0;j<m;j++)
		{
		 printf("%d \t",arr[j][i]);
		}
		 printf("\n");
	}
	getch();
}
