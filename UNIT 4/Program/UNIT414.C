#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp;
	int rev=0;
	clrscr();

	printf("Enter number: ");
	scanf("%d",&n);
	temp=n;

	while(temp>0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;
	}

	if(rev==n)
	{
		printf("%d is a Palindrome",n);
	}
	else
	{
		printf("%d is not a Palindrome",n);
	}

	getch();
}