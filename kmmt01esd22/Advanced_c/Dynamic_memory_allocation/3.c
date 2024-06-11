/*3) write a function that takes an array and its size as input and returns biggest number index as output. And print the biggest number based on the function call.*/

#include<stdio.h>
int print_biggest(int arr[],int n);
int main()
{
	int i,b,n;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the inputs:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	b=print_biggest(arr,n);
	printf("Biggest no. is %d\n",arr[b]);
}

int print_biggest(int arr[],int n)
{
	int i,j=0,biggest;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			biggest=arr[i];
		}
		else
		{
			if(arr[i]>biggest)
			{
				biggest=arr[i];
				j=i;
			}
		}
	}
	return j;
}
