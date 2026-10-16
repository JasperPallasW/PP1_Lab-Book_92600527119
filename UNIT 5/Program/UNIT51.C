#include<stdio.h>
#include<conio.h>

int add(int a, int b);

void main()
{
	int x,y,sum;
	clrscr();

	printf("Enter value 1: ");
	scanf("%d",&x);
	printf("Enter value 2: ");
	scanf("%d",&y);

	sum=add(x,y);
	printf("\nAddition = %d",sum);

	getch();
}

int add(int a, int b)
{
	return a+b;
}