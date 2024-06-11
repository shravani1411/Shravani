/**3)
an array contains some numbers. You need to find out how many times the biggest number has occurred in that array.*/
#include<stdio.h>
int main()
{
	int n,i,b,count=0;
	printf("Enter array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(i==0)
			b=arr[i];
		else
		{
			if(arr[i]>b)
			{
				b=arr[i];
			}
		}


	}
	for(i=0;i<n;i++)
	{
		if(b==arr[i])
			count++;
	}

printf("%d is the biggest number & it's repeatation count is:%d",b,count);
}
