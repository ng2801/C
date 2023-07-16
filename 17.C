#include<stdio.h>
#include<conio.h>
void main()
{
	 int i,j,k,temp,a[50],b[50],n,merge[100],m;
	 clrscr();
	  printf("\n Enter the size of first array :");
	 scanf("%d",&m);
	 printf("\n Enter the elements of first array :\n");
	for(i=0;i<m;i++)
	{

	 scanf("%d",&a[i]);
	 merge[i]=a[i];
	}
	k=i;
	 printf("\n Enter the size of second array :");
	 scanf("%d",&n);
	 printf("\n Enter the elements of second array :\n");
	for(i=0;i<n;i++)
	{

	 scanf("%d",&b[i]);
	 merge[k]=b[i];
	 k++;
	}
printf("\n The new array after merging is :")	 ;
for(i=0;i<k;i++)
{
	for(j=i+1;j<k;j++)
	 {
		if(merge[i]>merge[j])
		{
			temp=merge[i];
			merge[i]=merge[j];
			merge[j]=temp;

		 }
	 }
}
for(i=0;i<k;i++)
 printf(" %d ",merge[i]);

getch();
}

