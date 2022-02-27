#include<stdio.h>
#include<conio.h>
void main()
{
	float sum,i,x;
	int n=20;
	for(i=1.0;i<=n;i++){
	 x=i/(i+1) ;
	 sum=sum+x ;}
	 printf("the sum is %.2f",sum);
	 getch();
}
