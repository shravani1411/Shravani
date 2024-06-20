/*Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.*/

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i,*p=0;
	for(i=0;i<10;i++)
	{
		p=&arr[i];
		printf("arr[%d]=%d address:%p\n",i,*p,p);
	}
	printf("\n");
}


