#include<stdio.h>
#include<conio.h>

#define PI 3.14
#define SQUARE(x) ((x)*(x))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define AREA(r) (PI*(r)*(r))

void main()
{
	int n,p,q;
	float r;
	clrscr();

	printf("Value of PI (macro) = %.5f\n\n",PI);

	printf("Enter a number: ");
	scanf("%d",&n);
	printf("SQUARE(%d) = %d\n\n",n,SQUARE(n));

	printf("Enter first number: ");
	scanf("%d",&p);
	printf("Enter second number: ");
	scanf("%d",&q);
	printf("MAX(%d, %d) = %d\n\n",p,q,MAX(p,q));

	printf("Enter the radius of a circle: ");
	scanf("%f",&r);
	printf("AREA(%.2f) = %.2f",r,AREA(r));

	getch();
}