#include<stdio.h>
#include<conio.h>
void main ()
{
	char *s;
	int len,i;
	printf("\n enter the string");
	gets(s);
	len=strlen(s);
	printf("\n the reverse of the string is");
	for(i=len;i>=0;i--)
	printf("%c",*(s+i));
	getch();
}
