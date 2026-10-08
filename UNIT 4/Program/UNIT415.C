#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,p,r,k;
	int sum=0,d=0;
	clrscr();

	printf("Enter number: ");
	scanf("%d",&n);

	temp=n;
	while(temp>0)
	{
		d++;
		temp=temp/10;
	}

	temp = n;
	while(temp>0)
	{
		r=temp%10;
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
		printf("\n%d is an Armstrong number",n);
	}
	else
	{
		printf("\n%d is not an Armstrong number",n);
	}

	getch();
}