#include<stdio.h>
#include<conio.h>
void main(){
	int a[3][3],osum,i,j;
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		scanf("%d",a[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			if(a[i][j]%2==0){
				printf("is even element");
			}
			else{
				osum=osum+a[i][j];
			}}}
				
				for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d",a[i][j]);}
			printf("\n");}
			printf("%d is the odd sum",osum);
			getch();
}

