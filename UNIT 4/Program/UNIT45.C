#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for(i=200;i>=180;i--)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}

	getch();
}