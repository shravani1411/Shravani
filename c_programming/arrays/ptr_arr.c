
#include<stdio.h>

int main()
{
	int arr[]={1,2,5,3,2},i;
	int *p=arr;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(arr+i));
		printf("%d\n",*(p+i));
		printf("%p\n",(p+i));
	//	printf("%p\n",&(p+i));
		printf("%p\n",&arr[i]);
	}
}
