/*Write a program to reverse an array and print it. Do it without using any extra array variable ,by swapping the elements on both ends till we reach the middle of the array.

Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1}; //array elements stored in reverse order now*/


#include<stdio.h>
#include"7_header.h"

void swap(int arr[],int n);
int main()
{
	int i,n;
	printf("Enter n value-Array Size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("array value arr[%d] : %d\n",i,arr[i]);
	}
	swap(arr,n);
}


