#include<stdio.h>
#include<conio.h>
#include "myheader.h"

void main()
{
	int n;
	clrscr();

	printf("%s\n\n",GREETING);

	printf("Enter a number: ");
	scanf("%d",&n);

	printf("\nCube of %d = %d",n,cube(n));

	getch();
}