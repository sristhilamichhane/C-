#include<stdio.h>
#include<conio.h>
void main ()
{
	int num, count=0 ;
	float sum=0 , avg ;
	do 
	{
		printf("enter a number:\t");
		scanf("%d",&num);
		sum=sum+num ;
		count++ ;
	}
	while(num>0);
	sum=sum-num ;
	avg=(sum)/(count-1) ;
	printf("\nthe sum is %d",sum);
	printf("\nthe avg is %f",avg);
getch();
}
