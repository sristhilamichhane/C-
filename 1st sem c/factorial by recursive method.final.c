#include<stdio.h>
#include<conio.h>
int f(int n){
	int res;
	if((n==0)||(n==1))
	res=1;
	else
	res= f(n-1)+f(n-2);
	return res;
}
int main(){
	int i,r,a;
	printf("enter number");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("%d ",f(i));
	}
	r=f(i);
	printf("%d is the factorial",r);
	getch();
}
