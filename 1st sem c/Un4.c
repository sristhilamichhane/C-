#include<stdio.h>
#include<conio.h>
void main ()
{
	char name[100];
	printf("enter your full name");
	scanf("%[^\n]",name);
	printf("your full name is %s", name);
	getch ();
}
