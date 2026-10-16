#include<stdio.h>
#include<conio.h>

int isArmstrong(long n);

void main()
{
	long n;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld",&n);

	if(isArmstrong(n)==1)
	{
		printf("\n%ld is an Armstrong number",n);
	}
	else
	{
		printf("\n%ld is not an Armstrong number",n);
	}

	getch();
}

int isArmstrong(long n)
{
	long temp,sum=0,p;
	int d=0;
	int r,k;

	temp=n;
	while(temp>0)
	{
		d++;
		temp=temp/10;
	}

	temp=n;
	while(temp>0)
	{
		r=(int)(temp%10);
		p=1;
		for(k=1;k<=d;k++)
		{
			p=p*r;
		}
		sum=sum+p;
		temp=temp/10;
	}

	if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}