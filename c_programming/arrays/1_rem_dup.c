
#include<stdio.h>

int main()
{
	int n,i,j,t;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("after removing duplicates\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			printf("%d\n",arr[i]);
		}
	}
	printf("2n largest element:%d\n",arr[1]);
}
