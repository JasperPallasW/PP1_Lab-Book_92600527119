#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int radius;
	float a;
	clrscr();

	printf("Enter radius of circle: ");
	scanf("%d",&radius);
	a=PI*radius*radius;
	printf("\nArea of Circle: %.2f",a);

	getch();
}