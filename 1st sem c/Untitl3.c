#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,sum;
	char nexttime ;
	nexttime='y';
	while(nexttime=='y')
	{
		printf("enter the value of a & b to be added");
		scanf("%d %d",&a,&b);
		sum=a+b ;
		printf("\nthe sum is %d",sum);
		printf("\ndo you want to add another number?");
		printf("\npress y for yes and other character for exit");
		scanf(" %c",&nexttime);
	}
getch();
}
