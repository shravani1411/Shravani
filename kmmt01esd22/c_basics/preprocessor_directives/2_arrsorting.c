/* 2 Write down a macro to find the biggest of two numbers. Using this macro , implement array sorting.*/

#include<stdio.h>
#define ARRAY(a1,a2) ((a1)>(a2))
int main()
{
	int i,j,temp,n;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ARRAY(arr[j],arr[j+1]))
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,arr[i]);
}

