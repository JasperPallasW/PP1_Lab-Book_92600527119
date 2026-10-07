#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,temp,sum,p,d,r,k;
	clrscr();

	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Armstrong numbers up to %d:\n",n);

	for(i=1;i<=n;i++)
	{
		temp=i;
		d=0;

		while(temp>0)
		{
			d++;
			temp=temp/10;
		}

		temp=i;
		sum=0;

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

		if(sum==i)
		{
			printf("%d",i);
		}
	}

	getch();
}