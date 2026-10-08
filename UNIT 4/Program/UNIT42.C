#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for(i=2;i<=20;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}

	getch();
}