#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*ptr;
	char n[30];
if((ptr=fopen("school of engineering first project","r"))== NULL){
	printf("error!");
	exit(1);}
		fscanf(ptr,"%[^\n]",n);
		printf("data from the file is %s",n);
	fclose(ptr);
	getch();
}
