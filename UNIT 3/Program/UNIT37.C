#include<stdio.h>
#include<conio.h>
void main()
{
	int q;
	float p,tp,d,fp;
	clrscr();

	printf("Enter Quantity: ");
	scanf("%d",&q);
	printf("Enter Price: Rs. ");
	scanf("%f",&p);

	tp=p*q;
	if(tp>1000)
	{
		d=tp*0.15;
	}
	else
	{
		d=tp*0.10;
	}

	fp=tp-d;
	printf("\nTotal Price: Rs. %.2f",tp);
	printf("\nDiscount: Rs. %.2f",d);
	printf("\nPrice after discount: Rs. %.2f",fp);

	getch();
}