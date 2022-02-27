#include<stdio.h>
#include<conio.h>
struct student{
	char name[30];
};
void main()
{
	int i;
	struct student s[48];
	for(i=0;i<=48;i++)
	{
		scanf("%s",&s[i].name);
		printf("%s",s[i].name);
	}
	getch();
}
