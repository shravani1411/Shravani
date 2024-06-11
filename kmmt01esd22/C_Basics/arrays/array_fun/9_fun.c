#include"swap.h"
void swap(int n,int arr1[],int arr2[])
{
	int temp,i,j;
	for(i=n-1,j=0;j>=0&&j<n;i--,j++)
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("reverse of array1 is %d\n",arr1[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("reverse of array2 is %d\n",arr2[j]);
	}
}
