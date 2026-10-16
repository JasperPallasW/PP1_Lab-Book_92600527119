#include<stdio.h>
#include<conio.h>

unsigned long factorial(int n);

void main()
{
	int n;
	clrscr();

	do
	{
		printf("Enter a number (0 to 12): ");
		scanf("%d",&n);
	}
	while(n<0 || n>12);

	printf("\nFactorial of %d = %lu",n,factorial(n));

	getch();
}

unsigned long factorial(int n)
{
	unsigned long f=1;
	int i;

	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}