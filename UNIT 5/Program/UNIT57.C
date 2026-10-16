#include<stdio.h>
#include<conio.h>

int isPrime(long n);

void main()
{
	long n;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld",&n);

	if(isPrime(n)==1)
	{
		printf("\n%ld is a Prime number", n);
	}
	else
	{
		printf("\n%ld is not a Prime number",n);
	}

	getch();
}

int isPrime(long n)
{
	long i;

	if(n<2)
	{
		return 0;
	}

	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		return 0;
		}
	}
	return 1;
}