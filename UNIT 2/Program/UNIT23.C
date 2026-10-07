#include<stdio.h>
#include<conio.h>
void main()
{
	int p=1000,r=5,y=2,i;
	clrscr();

	printf("Principle Amount: $%d",p);
	printf("\nRate of Interest: %d%",r);
	printf("\nNo of Years: %d Years",y);
	i=p*r*y/100;
	printf("\n\nSimple Interest: $%d",i);

	getch();
}