#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,xx ;
	int p;
	printf("enter two operands");
	scanf("%d%d",&a,&b);
	printf("\nenter choices");
	scanf(" %d",&p);
	switch(p)
	{
		case 1 :{
		xx = a+b ;
		printf("the sum is %d", xx);
		break ;}
		case 2 :{
		xx = a-b ;
		printf("the difference is %d", xx);
		break ;}
	    case 3 :{
		xx = a*b ;
		printf("the product is %d", xx);
		break ;}
		case 4 :{
	    xx= a/b ;
		printf("the quotient is %d", xx);
		break ;}
		default : printf("invalid");
		break;
	}
	getch();
}
