#include<stdio.h>
#include<conio.h>
#define PI 3.14

float circleArea(float r);

void main()
{
	float radius;
	clrscr();

	printf("Enter the radius: ");
	scanf("%f",&radius);

	printf("\nArea of circle= %.2f",circleArea(radius));

	getch();
}

float circleArea(float r)
{
	return PI*r*r;
}