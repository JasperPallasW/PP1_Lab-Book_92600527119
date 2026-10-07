#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,prime;
	clrscr();

	printf("Enter the limit: ");
	scanf("%d",&n);

	printf("Prime numbers up to %d:\n",n);

	for(i=2;i<=n;i++)
	{
		prime=1;

		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
	}

	if(prime==1)
	{
		printf("%d",i);
	}

	getch();
}