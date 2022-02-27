#include<stdio.h>
#include<conio.h>
void main ()
{
	int i , x = 0 ;
	for( i = 1 ; i < 10 ; i++)
	if( i % 2 == 0 ) continue;
	++x ;
	printf("\t x = %d ", x++) ;
	printf("\n i = %d", i) ;
	getch();
}
