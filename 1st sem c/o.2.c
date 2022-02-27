#include<stdio.h>
#include<conio.h>
void main ()
{
	int num=1 ;
	n1:
		printf("%d",num++);
		if(num > 100)
		goto n2 ;
		else 
		goto n1 ;	
	n2:
	getch();   
}
