/*5) Write a search function that will take an array , its size and an element to search as inputs. Search that element in the array, and return the index of the found element. If not found, return -1.

	Call this function to find the element in a statically created array. Use the same function to find an element in a dynamically created array.*/

#include<stdio.h>
#include<stdlib.h>
int search(int [],int ,int );
int main()
{
	int i,n,a;
	printf("Enter array size:\n");
	scanf("%d",&n);
	int arr1[n];
	printf("Enter statical array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int *p=(int *)malloc(n*sizeof(int));
	printf("Enter element for dynamic:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Enter element to search:\n");
	scanf("%d",&a);
	printf("index of static:%d\n",search(arr1,n,a));
	printf("index of dyn:%d\n",search(p,n,a));
}
int search(int arr[],int n,int a)
{
	int i,j,d;
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
			return i;
	}
	return -1;
}
