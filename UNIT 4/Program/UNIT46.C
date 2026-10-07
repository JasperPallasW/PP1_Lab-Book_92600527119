#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for(i=1;i<=10;i++)
	{
		printf("%d\t%d",i,11-i);
	}

	getch();
}