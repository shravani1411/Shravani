/*Given an array of n integers where n>1, return an array of same size an input array where at every index of the output array should contain the product of all elements in the array except the element at the given index.
Example:
arr[] = {10, 4, 1, 6, 2}
prod[] = {48,120,480,80,240}

 */
#include<stdio.h>
int fun(int arr[],int ,int);
int main()
{
	int n,i;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int arr[n],prod[n];
	printf("Enter the array values:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		prod[i]=fun(arr,n,i);
		printf("prod[%d]=%d\n",i,prod[i]);
}
}
int fun(int arr[],int n,int i)
{
	int j,prod=1;
	for(j=0;j<n;j++)
	{
		if(i!=j)
		{
			prod=prod*arr[j];
		}

	}
return prod;
}
