#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,space;
	char c[]="programming" ;
	printf("enter the number of rows");
	scanf("%d",&row);
	for(i=row;i>=1;i--)
	{
		for(space=0;space<row-i;++space)
		printf(" ");
		for(j=11;j<i-1;++j);
		printf("%c",c[j]);
		for(j=0;j<2*i-1;++j)
		printf("%c",c[j]);
		printf("\n");
	}
	getch();
}
