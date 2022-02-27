#include<stdio.h>
int main ()
{
	int m,n,c,d,matrix[3][2] , maximum;
	printf("enter the number of rows and columns of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of the matrix\n");
	for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	scanf("%d",&matrix[c][d]);
	maximum=matrix[0][0];
		for(c=0;c<m;c++)
	for(d=0;d<n;d++)
	if (matrix[c][d]>maximum)
	maximum=matrix[c][d];
	printf("maximum element in the matrix is %d\n", maximum);
	return 0;
}
