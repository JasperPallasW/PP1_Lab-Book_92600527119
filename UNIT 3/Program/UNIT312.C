#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();

	printf("Enter charaacter between a/A: ");
	scanf("%c",&a);

	if(a=='A')
	{
		printf("\nCharacter is in uppercase");
	}
	else
	{
		printf("\nCharacter is in lowercase");
	}

	getch();
}
