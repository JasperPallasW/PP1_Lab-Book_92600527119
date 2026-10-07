#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2,b=5,temp;
	clrscr();

	temp=a;
	a=b;
	b=temp;
	printf("Interchange of value a: %d",a);
	printf("\nInterchange of value b: %d",b);

	getch();
}