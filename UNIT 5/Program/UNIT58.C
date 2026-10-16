#include<stdio.h>
#include<conio.h>

void fibonacci(int n);

void main()
{
	int n;
	clrscr();

	printf("How many terms: ");
	scanf("%d",&n);
	printf("\n");

	fibonacci(n);

	getch();
}

void fibonacci(int n)
{
	long a=0,b=1,c;
	int i;

	for(i=1;i<=n;i++)
	{
		printf("%ld",a) ;
		c=a+b;
		a=b;
		b=c;
	}
}