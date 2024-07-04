#include"9_swap.h"
void swap(int n,int arr1[],int arr2[])
{
	int temp,i,j;
	for(i=n-1,j=0;j>=0&&j<n;i--,j++)
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
	}
	printf("reversed elements of array2 in array1:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\nreversed elements of array1 in array2:\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr2[j]);
	}
	printf("\n");
}
