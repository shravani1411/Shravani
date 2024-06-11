/*2	Write the following program :
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8

its transpose should be :     1 4 7
                              3 5 8	*/

#include<stdio.h>
int main()
{
	int i,j,n,r,c;
	printf("Enter r & c values:\n");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	printf("Enter a matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Its transpose:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",arr[j][i]);
		}
	printf("\n");
	}
}


