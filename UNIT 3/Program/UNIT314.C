#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();

	printf("Enter value A: ");
	scanf("%d",&a);
	printf("Enter value B: ");
	scanf("%d",&b);
	printf("Enter value C: ");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
		printf("\nA is Minimum");
		}
		else
		{
		printf("\nC is Minimum");
		}
	}
	else
	{
		if(b<c)
		{
		printf("\nB is Minimum");
		}
		else
		{
		printf("\nC is Minimum");
		}
	}

	getch();
}