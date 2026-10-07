#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("Enter your number: ");
	scanf("%d",&n);

	if(n%2==0)
	{
		printf("Your number is even");
	}
	else
	{
		printf("Your number is odd");
	}

	getch();
}