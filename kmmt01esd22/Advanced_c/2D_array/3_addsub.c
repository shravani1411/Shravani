/*3. Write a program  for matrix addition and subtraction.*/

#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter r & c values:\n");
	scanf("%d%d",&r,&c);
	int arr1[r][c];
	int arr2[r][c];
	printf("Enter Matrix 1 elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Matrix 1 elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
	printf("\n");
	}
	printf("Matrix 2:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("Addition:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr1[i][j]+arr2[i][j]);
		}
	printf("\n");
	}
	printf("Subtraction:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr1[i][j]-arr2[i][j]);
		}
	printf("\n");
	}
}
