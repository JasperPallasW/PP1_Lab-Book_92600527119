#include<stdio.h>
#include<conio.h>
void main()
{
	int h,w,a;
	clrscr();

	printf("Enter height of rectangle: ");
	scanf("%d",& h);
	printf("Enter width of rectangle: ");
	scanf("%d",& w);
	a=h*w;
	printf("\nArea of Rectangle: %d",a);

	getch();
}