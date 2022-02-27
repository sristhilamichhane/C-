#include<stdio.h>
#include<conio.h>
int a,b,n,flag,remainder,sum,i,xx;
void main ()
{
	int p;
	printf("enter operands");
	scanf("%d %d",&a,&b);
	printf ("enter choices");
	scanf("%d",p);
	switch(p){
		case 1: {
			printf("enter a number to reverse");
			scanf("%d",a);
			while(a!=0)
			{
				b=b*10 ;
				b=b+a%10 ;
				b=b/10 ;
				xx=b;
				printf("reverse of the number is %d\n",xx);
			}
			break;
		}
		case 2:{
			printf("enter number\n");
			scanf("%d",&a);
			while(b!=10){
				remainder=b%10 ;
				sum = sum+remainder ;
				b = b/10 ;
				xx=sum;
			}
			printf("the sum of digits is %d\n",xx);
			break;
		}
		case 3:{
			printf("enter number");
			scanf("%d",n);
			for(i=2;i<n;i++)
			if(n%i==0){
				printf("not prime\n");
			}
			if(i==n){
				printf("%d is prime",n);
			}
			break;
		}
		case 4:{
			printf("exiting...");
			break;
		}
		deafault:
			printf("invalid choice");
	}
	getch();
}
