/*Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of an array.*/

#include<stdio.h>
#define ARRAY(arr,n) 	for(i=0;i<n;i++){\
	printf("arr[%d]=%d\n",i,arr[i]);}\

int main()
{
	int i,n;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)	
		scanf("%d",&arr[i]);
	ARRAY(arr,n)
}

