#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c ;
	printf("enter three number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("the largest number is a");
		else
			printf("the largest number is c");
	}
		else{
			if (b>c)
				printf("the largest number is b");
			else
				printf("the largest number is c");
		}
getch();
}
