/*Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers.*/

#include<stdio.h>
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		arr[i]=i+1;
		printf("%d\t",arr[i]);
	}
//	printf("\n");
	printf("\nall even numbers:\n");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
			printf("%d\t",arr[i]);
	}

	printf("\nall odd numbers:\n");
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==1)
			printf("%d\t",arr[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		int arr[i];
		arr[i]=i+5+1;
		printf("%d\t",arr[i]);
	}
	printf("\n");
}



