#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("Enter value A: ");
	scanf("%d",&a);
	printf("Enter value B: ");
	scanf("%d",&b);

	if(a>b)
	{
		printf("\nA is maximum");
	}
	else
	{
		printf("\nB is maximum");
	}

	getch();
}