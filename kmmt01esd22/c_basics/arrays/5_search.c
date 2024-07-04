/*5. Write a program to search for a specific element given by the user, in an array and display where it was found in the array (index).
If the element is available multiple times, then print all positions. also print how many times the element was repeated, at the end. Try to do it in a single loop. Make array size as a variable and take array size as input from the user.

eg., input array: 1 2 4 6 2 7 3 7 2 3
enter number to search: 7
output:
7 is found at 6th position
7 is found at 8th position
7 was repeated 2 times*/

#include<stdio.h>
int main()
{
	int i,j,k=0,n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Input Array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number to search:\n");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(arr[i]==j)
		{
			printf("%d found at %d position\n",j,i);
			k++;
		}
	}
	printf("%d was repeated %d times\n",j,k);
}

