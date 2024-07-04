/*1. Write the following program :
  Declare an integer array of size 100.
  Assign numbers 1-100 to each element of the array.
  Print all the numbers.
  Print all even elements.
  Print all odd elements.
  Add 5 to each element and print 6 – 105 numbers.*/

#include<stdio.h>
int main()
{
	int arr[100],i;
	for(i=1;i<=100;i++)
	{
		arr[i]=i;
		printf("%d\t",arr[i]);
	}
	printf("\nall even numbers:\n");
	for(i=1;i<=100;i++)
	{
		if(arr[i]%2==0)
			printf("%d\t",arr[i]);
	}

	printf("\nall odd numbers:\n");
	for(i=1;i<=100;i++)
	{
		if(arr[i]%2==1)
			printf("%d\t",arr[i]);
	}
	printf("\nadding 5 to the each element:\n");
	for(i=1;i<=100;i++)
	{
		int arr[i];
		arr[i]=i+5;
		printf("%d\t",arr[i]);
	}
	printf("\n");
}



