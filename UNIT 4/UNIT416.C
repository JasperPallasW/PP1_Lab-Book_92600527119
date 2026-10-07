#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,prime;
	clrscr();

	printf("Enter a number: ");
	scanf("%d",&n);

	prime=(n>=2);

	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
	}

	if(prime==1)
	{
		printf("%d is a Prime number",n);
	}
	else
	{
		printf("%d is not a Prime number",n);
	}

	getch();
}