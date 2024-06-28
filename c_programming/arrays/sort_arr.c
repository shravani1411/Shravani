
#include<stdio.h>

int main()
{
	int arr[]={7,10,5,100,3};
	int l=sizeof(arr)/sizeof(arr[0]);
	int i,j,t;
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-1-i;j++)
		{
			if(arr[i]<arr[j+1])
			{
				t=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%d\n",arr[i]);
	}

}
