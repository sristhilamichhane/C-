#include<stdio.h>
#include<conio.h>
float si()
{
	int p,t,r;
	float si ;
	printf("enter p,t,r");
	scanf("%d%d%d",&p,&t,&r);
	si =(p*t*r)/100 ;
	printf("\nthe si is %f",si);
	return si;
}
void main()
{
	printf("\nthe si is %f",si());
	getch();
}
