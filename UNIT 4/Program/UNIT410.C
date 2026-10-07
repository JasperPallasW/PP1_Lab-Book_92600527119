#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int sum=0;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf("Enter number: ");
		scanf("%d",&n);
		sum=sum+n;
	}

	printf("\nTotal = %d",sum);

	getch();
}