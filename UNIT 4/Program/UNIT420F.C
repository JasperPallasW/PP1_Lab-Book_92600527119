#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();

	printf("Enter number of rows: ");
	scanf("%d",&n);

	printf("\nF.\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=n-i+1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

	getch();
}