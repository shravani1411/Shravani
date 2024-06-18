
#include <stdio.h>

int main() {
	int arr[5]={7,10,5,100,3},i;
	int (*p)[5]=&arr;
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(arr+i));
	}
}
