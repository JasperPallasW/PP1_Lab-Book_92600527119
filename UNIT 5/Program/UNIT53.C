#include<stdio.h>
#include<conio.h>

long reverse(long n);

void main()
{
	long n;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld",&n);

	printf("\nReverse = %ld",reverse(n));

	getch();
}

long reverse(long n)
{
	long rev=0;

	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}