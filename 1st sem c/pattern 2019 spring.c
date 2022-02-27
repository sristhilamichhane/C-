#include <stdio.h>
#include<string.h>
#include<conio.h>
void main(){
	int i,j,l;
	char n[]="Programming";
	l=strlen(n);
	for (i=l;i>=0;i--){
	printf("\n");
		for(j=0;j<i;j++){
			printf("%c",n[j]);
			
		}
	}
	getch();
}
