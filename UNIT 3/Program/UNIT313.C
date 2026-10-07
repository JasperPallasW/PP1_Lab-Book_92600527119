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

	if(a>b)
	{
		if(a>c)
		{
			printf("A is Maximum");
		}
		else
		{
			printf("C is Maximum");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is Maximum");
		}
		else
		{
			printf("C is Maximum");
		}
	}

getch();
}