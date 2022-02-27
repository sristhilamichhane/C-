#include<stdio.h>
#include<conio.h>
int fib( int n);
void main()
{
	int b,a,i;
	printf("enter the no of terms");
	scanf("%d",&a);
	printf("fibonaci series:");
		for (i=2;i<a;i++){
	printf("%d\t",fib(i));
	}
	getch();
}
int fib(int n)
{
	if(n<=2)
		return n;
	else
	return (fib(n-2)+fib(n-1));
	}
