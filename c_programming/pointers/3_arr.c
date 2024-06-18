
#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,};
	int *p=&arr[0];
	p+=3; // equals to p[3]
	printf("%d\n",*p);
}
