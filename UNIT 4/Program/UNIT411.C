#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,i;
	int result=1;
	clrscr();

	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);

	for(i=1;i<=y;i++)
	{
		result=result*x;
	}

	printf("%d ^ %d = %d",x,y,result);

	getch();
}