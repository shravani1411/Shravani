/*1. Declare a two dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
  Find out and print the following :
  1) Total sales by each sales man
  2) Total sales for a item
  3) Total sales */

#include<stdio.h>
#define R 3
#define C 3
int main()
{
	int arr[R][C];
	int i,j,x=0,y=0,z=0;
	printf("Please enter the array elements with ROW 3 and COLUM 3:\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			x += arr[i][j];
		}
		printf("Total items by %d sales person = %d\n",i+1,x);
		x = 0;
	}
	printf("\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			z += arr[i][j];
		}
	}
	printf("Total sales = %d\n",z);
	printf("\n");
	for(i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
			y += arr[j][i];
		}
		printf("Total sales for a item = %d\n",y);
		y = 0;
	}
	printf("\n");
}
