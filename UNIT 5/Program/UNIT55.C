#include<stdio.h>
#include<conio.h>

long reverse(long n);
int isPalindrome(long n);

void main()
{
	long n;
	clrscr();

	printf("Enter a number: ");
	scanf("%ld",&n);

	if(isPalindrome(n)==1)
	{
		printf("\n%ld is a Palindrome");
	}
	else
	{
		printf("\n%ld is not a Palindrome");
	}

	getch();
}

long reverse(long n)
{
	long rev=0;

	while(n>0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}

int isPalindrome(long n)
{
	if(reverse(n)==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}