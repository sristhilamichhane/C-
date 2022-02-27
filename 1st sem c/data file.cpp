#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*ptr
	char n[30];
	ptr=fopen("D:\\text.txt","w");
	gets(n);
	fprintf(ptr,"%s",n);
	fclose(ptr);
	getch();	
}
