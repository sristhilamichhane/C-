#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,a[3][3],rsum,csum;
		printf("enter elements");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	
		scanf("%d",&a[i][j]);
	} }
	 for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		rsum=rsum+a[i][j];}
	printf("rsum=:%d",rsum);
	rsum=0;}
	for(j=0;j<3;j++){
	for(i=0;i<3;i++){
		csum=csum+a[i][j];}
		printf("csum=:%d",csum);
		csum=0;}
		getch();
}
