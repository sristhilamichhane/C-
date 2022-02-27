#include<stdio.h>
#include<conio.h>
void main ()
{
	int i , j , n = 5;
	for( i = 1 ; i <= n ; i++) {
	for( j = 1 ; j <= n + 1 -i ; j++){
	printf("\t*");}
	printf("\n");}
getch();	
}
