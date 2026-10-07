#include<stdio.h>
#include<conio.h>
void main()
{
	char A;
	clrscr();

	printf("Enter character between a/A: ");
	scanf("%c",&A);

	if(A!='a')
	{
		printf("\nConvert to a");
	}
	else
	{
		printf("\nConvert to A");
	}

	getch();
}