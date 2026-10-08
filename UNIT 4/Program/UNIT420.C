#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k;
	clrscr();

	printf("Enter N (number of rows): ");
	scanf("%d",&n);

	printf("\nA\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	printf("\nB\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

	printf("\nC\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}

	printf("\nD\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i%2);
		}
		printf("\n");
	}

	printf("\nE\n");
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}

	printf("\nF\n");
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=n-i+1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	printf("\nG\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	printf("\nH\n");
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

	getch();
}