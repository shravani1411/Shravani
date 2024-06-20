/*Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and print the biggest number and its position in the array, smallest number and its position in the array. Find both using a single loop.*/

#include<stdio.h>
int main()
{
	int arr[10];
	int i, biggest,smallest,j,k;
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
				j=i;
			}
			if(arr[i]<smallest)
			{
				smallest=arr[i];
				k=i;
			}
		}
	}
	printf("biggest no. is %d and position is %d\n",biggest,j);
	printf("smallest no. %d and position is %d\n",smallest,k);
}
