#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
	int a,b,c;
	float d , i , root1 , root2 , realpart , imgpart;
	printf("enter the quadratic equation");
	scanf("%d %d %d",&a,&b,&c);
	d= b*b- 4*a*c;
	if (d>0) {
		root1 = (-b + sqrt (d))/2*a ;
		root2 = (-b - sqrt (d))/2*a ;
		printf("root1 = %f and root2 = %f",root1,root2);
	}
	else if ("d == 0") {
		root1 = root2 = -b/(2 * a) ;
		printf("root1 = root2 = %f",root1,root2);
	}
	else {
		realpart = -b /(2 *a) ;
		imgpart = sqrt (- d )/(2 * a) ;
		printf("root1 = %f+%fi and root2 = %f-%fi",realpart , imgpart , realpart , imgpart);
	} 
	getch();
}
