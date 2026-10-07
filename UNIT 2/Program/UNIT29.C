#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20;
	clrscr();

	a=a+b;
	b=a-b;
	a=a-b;
	printf("Interchange of value a: %d",a);
	printf("\nInterchange of value b: %d",b);

	getch();
}