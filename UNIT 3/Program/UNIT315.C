#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,aoc,bm,pp1,bwd,es,total,per;
	clrscr();

	printf("Enter your Roll Number: ");
	scanf("%d",&rollno);
	printf("Enter your AOC mark: ");
	scanf("%d",&aoc);
	printf("Enter your BM mark: ");
	scanf("%d",&bm);
	printf("Enter your PP1 mark: ");
	scanf("%d",&pp1);
	printf("Enter your BWD mark: ");
	scanf("%d",&bwd);
	printf("Enter your ES mark: ");
	scanf("%d",&es);
	total=aoc+bm+pp1+bwd+es;
	printf("\nTotal marks: %d",total);
	per=total/5;
	printf("\nPercentage marks: %d%",per);

	if(per>=90)
	{
		printf("\nGrade A");
	}
	else if(per>=75)
	{
		printf("\nGrade B");
	}
	else if(per>=50)
	{
		printf("\nGrade C");
	}
	else if(per>=35)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nYou're failed");
	}

	getch();
}