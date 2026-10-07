#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int sum=0;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}

	printf("Sum of digits = %d",sum);

	getch();
}