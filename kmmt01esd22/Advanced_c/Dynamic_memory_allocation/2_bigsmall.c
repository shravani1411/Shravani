/*2) Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.

Try to convert the size to a variable and do it for n elements of the array using variable sized 
arrays.*/

#include<stdio.h>
int main()
{
	int arr[10];
	int i, biggest,smallest;
	for(i=0;i<10;i++)
	{
		printf("enter arr[%d]=",i);
		scanf("%d",&arr[i]);
		if(i==0)
		{
			biggest=arr[i];
			smallest=arr[i];
		}
		else
		{
			if(arr[i]>biggest)
			{
				biggest=arr[i];
			}
			if(arr[i]<smallest)
			{
				smallest=arr[i];
			}
		}
	}
	printf("biggest no. is %d\n",biggest);
	printf("smallest no. is %d\n",smallest);
}

