#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i; char c;
	struct{
		int id ;
		char name[30];
		float marks;
	};
	s[50];
	FILE*ptr ;
	ptr=fopen("c:\bc5\bin\befirstyear.txt","w^+");
	if(ptr==null)
	printf("file not found");
	else
	{
		for(i=0;i<50;i++){
			printf("enter information");
			scanf("%d%s%f",&s[i].id,s[i].name,&s[i].marks);
			fprintf(ptr,"%d%s%f",s[i].id,s[i].name,s[i].marks);
			while(c.fgets(ptr)!=EOF)
			if((strcmp(s[i].name,"srishti"))==0){
				printf("%d%s%f",s[i].id,s[i].name,s[i].marks);
				fclose(ptr);
			}
		}
	}
	getch();
}
