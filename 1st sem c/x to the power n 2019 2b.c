#include<stdio.h>
#include<conio.h>
int power(int x,int n){
	if (n!=0){
		return (x*power(x,n-1));
	}
	else 
	return 1;
}
void main(){
	int a,b,res;
	printf("enter the base number");
	scanf("%d",&b);
	printf("enter the power");
	scanf("%d",&a);
	res=power(b,a);
	printf("%d^%d=%d",b,a,res);
	getch();
}
