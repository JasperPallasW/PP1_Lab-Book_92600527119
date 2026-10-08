#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int fact=1;
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

	printf("\nFactorial of %d = %d",n,fact);

	getch();
}