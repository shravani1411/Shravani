/*Write a program to reverse an array and print it. Do it without using any extra array variable ,by swapping the elements on both ends till we reach the middle of the array.

Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1}; //array elements stored in reverse order now*/

#include<stdio.h>

int main()
{
	int n,i,j,t;
	printf("Enter n value-Array Size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d array values\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		printf("array value arr[%d] : %d\n",i,arr[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
/*		arr[j]=arr[j]+arr[i];
		arr[i]=arr[j]-arr[i];
		arr[j]=arr[j]-arr[i];*/
		// printf("%d %d\n",arr[i],arr[j]);
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
	}
	printf("\nBelow is the reversed array:\n");
	for(i=0;i<n;i++)
	{
		printf("array value arr[%d] : %d\n",i,arr[i]);
	}
}

