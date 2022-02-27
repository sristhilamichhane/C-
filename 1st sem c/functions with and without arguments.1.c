#include<stdio.h>
#include<conio.h>
int add(int );
float sub(float ,int );
void mul(){
	int a,b,c ;
	printf("\nenter a,b");
	scanf("%d%d",&a,&b);
	c=a*b ;
	printf("\n %d is the product",c);
}
void mm(float p){
	float y = p*p*p ;
	printf("\n%f",y);
}
void main(){
int c ;
mm(5.0);
printf("\n%d",c=add(3));
printf("\n%f",sub(3.3,6));
mul();
printf("\nthank you");
getch();}
int add(int c){
	c=c+3 ;
	printf("\n%d",c);
	return 0 ;}
float sub(float p,int q)
{
float z;
z=p-q ;
return z ;}
