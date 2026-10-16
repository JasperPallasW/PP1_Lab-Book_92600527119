#include<stdio.h>
#include<conio.h>

int sum(long n);

void main()
{
	long n;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld",&n);

	printf("\nSum of digits = %d",sum(n));

	getch();
}

int sum(long n)
{
	int sum=0;

	while(n>0)
	{
		sum=sum+(int)(n%10);
		n=n/10;
	}
	return sum;
}