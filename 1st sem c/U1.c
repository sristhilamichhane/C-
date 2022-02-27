#include<stdio.h>
#include<conio.h>
void main ()
{
	float nep,eng,math,phy,chem,bio,per ;
	printf("enter the marks of the subject");
	scanf("%f %f %f %f %f %f %f",&nep,&eng,&math,&phy,&chem,&bio,&per);
	per = (nep+eng+math+phy+chem+bio)/7 ;
	if (per >= 80)
	 printf("distinction");
	else if ( per >= 60)
	 printf("first division");
	else if ( per >= 45)
	  printf("second division");
	else if ( per >= 32)
	  printf("third division ");
	else
	  printf("fail");
	printf("\nthe percentage is %f", per);
	getch();        
}
