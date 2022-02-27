#include<stdio.h>
#include<conio.h>
void main ()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==2)
		continue;
		printf("\t%d",i);
	}
getch();
}
