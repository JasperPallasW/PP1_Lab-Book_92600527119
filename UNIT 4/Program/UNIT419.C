#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	unsigned long fact=1;
	clrscr();

	do
	{
		printf("Enter number (0 to 12): ");
		scanf("%d",&n);
	}
	while(n<0 || n>12);

	for(i=i;i<=n;i++)
	{
		fact=fact*i;
	}

	printf("Factorial of %d = %lu",n,fact);

	getch();
}