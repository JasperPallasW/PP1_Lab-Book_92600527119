#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum,sub,mul,div,per;
	clrscr();

	printf("Enter value 1: ");
	scanf("%d",&a);
	printf("Enter value 2: ");
	scanf("%d",&b);
	sum=a+b;
	printf("\naddition of value 1 & 2: %d", sum);
	sub=a-b;
	printf("\nsubtraction of value 1 & 2: %d", sub);
	mul=a*b;
	printf("\nmultiplication of value 1 & 2: %d", mul);
	div=a/b;
	printf("\ndivision of value 1 & 2: %d", div);
	per=a%b;
	printf("\nremainder of value 1 & 2: %d", per);

	getch();
}