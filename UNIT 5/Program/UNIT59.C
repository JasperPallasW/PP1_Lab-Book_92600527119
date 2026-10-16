#include<stdio.h>
#include<conio.h>

float rectArea(float l, float w);

void main()
{
	float length,width;
	clrscr();

	printf("Enter length: ");
	scanf("%f",&length);
	printf("Enter width: ");
	scanf("%f",&width);

	printf("\nArea of rectangle = %.2f",rectArea(length,width));

	getch();
}

float rectArea(float l, float w)
{
	return l * w;
}