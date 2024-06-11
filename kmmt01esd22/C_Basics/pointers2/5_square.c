/*"Write a function that communicates with main using a single static variable without taking any     input arguments.
 Everytime function returns something using the static variable,after using it, main sends another i    nput using the same variable and calls the function again.
 eg., print the square of each number of an array :
 for each number of the array :
     call the function
     main gets the static variable address as return value from function.
     main puts the array element in static variable.
 in the function :
     create static variable.
     if static variable value is not zero, print its square.
     function sends static variable address back to main."*/

#include<stdio.h>
int *squareroot(int [],int );
int main()
{
	int n,i;
	printf("Enter size of the array:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr[i];
		int *p=squareroot(arr,i);
		printf("square of arr[%d]=%d\n",i,*p);
	}
}

int *squareroot(int arr[],int i)
{
	static int x;
	x=arr[i]*arr[i];
	return &x;
}

