#include<stdio.h>
#include<conio.h>
void main()
{
	float s,hr,ta,da,pf,g;
	clrscr();

	printf("Enter salary: ");
	scanf("%f",&s);

	if(s>=5000)
	{
		hr=s*0.05;
		ta=s*0.06;
		da=s*0.04;
		pf=s*0.05;
	}
	else
	{
		hr=s*0.04;
		ta=s*0.05;
		da=s*0.03;
		pf=s*0.04;
	}

	g=s+hr+ta+da-pf;
	printf("\nhr= %.2f",hr);
	printf("\nta= %.2f",ta);
	printf("\nda= %.2f",da);
	printf("\npf= %.2f",pf);
	printf("\nGross Salary: %.2f",g);

	getch();
}