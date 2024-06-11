/*6) Write a program to print an array in reverse order (From last element to first). */

#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("Enter 5 values:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		printf("array value is arr[%d]:%d",i,arr[i]);
		printf("\n");
	}
	for(i=4;i>=0;i--)
	{
		printf("reverse order of array value is arr[%d]:%d\n",i,arr[i]);
	}
}

