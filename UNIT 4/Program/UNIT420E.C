#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k;
	clrscr();

	printf("Enter number of rows: ");
	scanf("%d",&n);

	printf("\nE.\n\n");
	k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}

	getch();
}