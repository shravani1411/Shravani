
#include<stdio.h>
#include "7_header.h"

void swap(int arr[], int n)
{
	int i,j;	
	for(i=n-1,j=0;i>j;i--,j++)
	{
		arr[j]=arr[j]+arr[i];
		arr[i]=arr[j]-arr[i];
		arr[j]=arr[j]-arr[i];
		// printf("%d %d\n",arr[i],arr[j]);
	}
	printf("\nBelow is the reversed array:\n");
	for(i=0;i<n;i++)
	{
		printf("array value arr[%d] : %d\n",i,arr[i]);
	}
}

