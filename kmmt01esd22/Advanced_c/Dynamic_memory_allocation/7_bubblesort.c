/*7) create an array dynamically, read data, and sort it and print it. Write a bubblesort function for that based on below steps.

•Run a nested loop. The outer loop will loop through n-1 times, if there are n elements to be sorted.
•The inner loop just compares adjacent elements and will swap them if they are not in correct order.
•Starting from the first index, compare the first and the second elements. If the first element is greater than the second element, they are to be swapped.
Now, compare the second and the third elements. Swap them if they are not in order.
The above process goes on until the last element.
•The same process goes on for the remaining iterations. After each iteration, the largest element among the unsorted elements is placed at the end.
In each iteration, the comparison takes place up to the last unsorted element.
The array is sorted when all the unsorted elements are placed at their correct positions.*/

#include<stdio.h>
#include<stdlib.h>
#define ARRAY(a1,a2) ((a1)>(a2))
int main()
{
	int i,j,temp,n;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int *p=(int *)malloc(n*sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ARRAY(p[j],p[j+1]))
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("arr[%d]=%d\n",i,p[i]);
}

