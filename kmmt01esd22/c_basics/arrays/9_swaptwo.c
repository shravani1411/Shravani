/*9. Write a program to swap two arrays in reverse order.
array1 : {1,2,3,4,5}
array2: {6,7,8,9,10}

after swapping output should be as below:

array1 : { 10,9,8,7,6}
array2: { 5,4,3,2,1}*/

#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter n value:");
	scanf("%d",&n);
	int arr1[n];
	int arr2[n];
	printf("enter the arr1 values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the arr2 values:\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr2[j]);
	}
	for(i=n-1,j=0;j<n;i--,j++)
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
	}
	printf("\nreversed elements of array 2 in array 1:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\nreversed elements of array 1 in array 2:\n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",arr2[j]);
	}
	printf("\n");
}
