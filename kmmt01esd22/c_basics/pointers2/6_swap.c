/*Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.*/

#include<stdio.h>
void swap(int *,int *);
int main()
{
	int arr[2],i;
	printf("enter 2 value:\n");
	for(i=0;i<2;i++)
		scanf("%d",&arr[i]);
	swap(&arr[0],&arr[1]);
	for(i=0;i<2;i++)
		printf("a[%d]=%d\n",i,arr[i]);
}

void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
