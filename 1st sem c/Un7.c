#include<stdio.h>
#include<conio.h>
void main ()
{
	float plus2 , entranceexam ;
	printf(" enter percentage mark of +2");
	scanf("%f",&plus2);
	printf("enter percentage of engineering entrance exam");
	scanf("%f",&entranceexam);
	if(plus2 >= 60){
		if(entranceexam >= 60){
			printf("congratulation");
			printf("your admission can be approach");
		}
	}
	getch();
}
