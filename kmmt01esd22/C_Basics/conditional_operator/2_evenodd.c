#include<stdio.h>
int main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	a%2==0?printf("no. %d is even",a):printf("no. %d is odd",a);
}

