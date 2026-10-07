#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int rev=0;
	clrscr();

	printf("Enter number: ");
	scanf("%d",&n);

	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}

	printf("\nReverse: %d",rev);

	getch();
}