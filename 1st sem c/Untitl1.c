#include<stdio.h>
#include<conio.h>
void main()
{
	long fact = 1 ;
	int n,i;
	printf("enter a number whose factorial is to be calculated ");
	scanf("%d , &n");
	for(i=1 ; i<=5 ; i++)
	{
		fact = fact * i ;
	}
	printf("\nthe factorial is %d",fact);
	getch();
}
