#include<stdio.h>
#include<conio.h>
int factorial(int );
void main ()
{
	int p ;
	printf("enter the number");
	scanf("%d",&p);
	printf("\nthe factorial is %d",factorial(p));
	getch();
}
int factorial (int k)
{
	int i,fact=1 ;
	for(i=1;i<=5;i++)
	fact=fact*i ;
	printf("\n %d",fact);
	return fact ;
}
