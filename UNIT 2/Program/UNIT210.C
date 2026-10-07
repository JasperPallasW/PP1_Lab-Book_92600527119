#include<stdio.h>
#include<conio.h>
void main()
{
	int q,p,d;
	float f;
	clrscr();

	printf("Enter Quantity: ");
	scanf("%d",&q);
	printf("Enter Price: $");
	scanf("%d",&p);
	printf("Enter Discount: ");
	scanf("%d",&d);
	f=q*(p-(p*d/100));
	printf("\nFinal Amount: $%.2f",f);

	getch();
}