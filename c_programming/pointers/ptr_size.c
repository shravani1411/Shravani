
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=5;
	int *ptr=&a;
//	ptr=malloc(sizeof(int));
//	printf("%d\n",*ptr);
	printf("%ld\n",sizeof(ptr));
}
