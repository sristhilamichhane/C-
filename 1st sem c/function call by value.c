#include<stdio.h>
#include<conio.h>
void swap(int x,int y);
void main()
{
	int a,b;
	printf("enter the number");
	scanf("\n%d%d",&a,&b);
	printf("a=%d,b=%d",a,b);
	swap(a,b);
	printf("\n%d\n%d",a,b);
	getch();
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n\tinside\n%d\n%d",x,y);
}
