//2) Read a number and print if it is an even number or an odd number.

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	a%2==0?printf("no. %d is even\n",a):printf("no. %d is odd\n",a);
	
}

