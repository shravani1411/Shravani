//4) Read a number and print if it is a negative number or positive number or zero.

#include<stdio.h>

int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The no. is positive\n");
	}
	else if(a<0)
	{
		printf("The no. is negative\n");
	}
	else
	{
		printf("The no. is zero\n");
	}
}
