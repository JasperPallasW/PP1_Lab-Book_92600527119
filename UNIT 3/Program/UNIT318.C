#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();

	printf("Enter your number: ");
	scanf("%d",&number);

	if(number>0)
	{
		printf("\nThe number is positive");
	}
	else if(number<0)
	{
		printf("\nThe number is negative");
	}
	else
	{
		printf("\nThe number is zero");
	}

	getch();
}