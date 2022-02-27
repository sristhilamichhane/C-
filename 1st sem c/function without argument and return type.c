#include <stdio.h>
#include<conio.h>
int add()
{
	int s,x,y;
	printf("enter number");
	scanf("%d%d",&x,&y);
	s=x+y ;
	printf("%d is the sum",s);
	return 0;
}
void main()
{
	int h;
	h=add();
	printf("\nthank you");
	getch();
}
