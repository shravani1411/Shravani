/*Using the above macro, write a program to compute the sum of all elements in an array.*/
#include<stdio.h>
#define ARRAY(arr,n) 	for(i=0;i<n;i++){\
	sum=arr[i]+sum;}\

int main()
{
	int i,n,sum=0;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)	
		scanf("%d",&arr[i]);
	ARRAY(arr,n)
	printf("sum of arrays=%d\n",sum);
}

