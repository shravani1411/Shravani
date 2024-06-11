
#include<stdio.h>

int main()
{
	int n,i,j,k;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elemenets:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
				//printf("array after removing duplicates %d\n",arr[i]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
	printf("array after removing duplicates %d\n",arr[i]);
	}
}		
