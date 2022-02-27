#include<stdio.h>
#include<conio.h>
void main ()
{
	int num, rem ;
	printf("enter a number");
	scanf("%d", &num);
	rem = num % 2 ;
	if(rem == 0 ){
		printf("given num is even");
	}
	else{
		printf("given num is odd");
	} 
	getch();
}
