//2) Read a number and print if it is an even number or an odd number.

#include<stdio.h>

int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is even\n",a);
	}
	else
	{
		printf("%d is odd\n",a);
	}
}

